/**
 * @ingroup receptor
 *
 * @{
 * @file shell.c
 * @brief implementation of a command line shell receptor
 *
 * @copyright Copyright (C) 2013-2015, The MetaCurrency Project (Eric Harris-Braun, Arthur Brock, et. al).  This file is part of the Ceptr platform and is released under the terms of the license contained in the file LICENSE (GPLv3).
 */

#include "shell.h"
#include "semtrex.h"


void addCommand(Receptor *r,ReceptorAddress ox,char *command,char *desc,T *code) {
    T *expect = _t_new_root(PATTERN);
    T *s = _t_news(expect,SEMTREX_GROUP,SHELL_COMMAND);

    T *cm = _sl(s,SHELL_COMMAND);
    T *vl =  _t_newr(cm,SEMTREX_VALUE_LITERAL);
    T *vls = _t_newr(vl,SEMTREX_VALUE_SET);
    _t_new_str(vls,VERB,command);

    T *p = _t_new_root(SAY);
    __r_make_addr(p,TO_ADDRESS,ox);

    _t_news(p,ASPECT_IDENT,DEFAULT_ASPECT);
    _t_news(p,CARRIER,NULL_SYMBOL);
    _t_add(p,code);

    Process proc = _r_define_process(r,p,desc,"long desc...",NULL);
    T *act = _t_newp(0,ACTION,proc);

    _r_add_expectation(r,DEFAULT_ASPECT,SHELL_COMMAND,expect,act,0,0,NULL);
}

void makeShell(VMHost *v,FILE *input, FILE *output,Receptor **irp,Receptor **orp,Stream **isp,Stream **osp) {
    // create the shell receptor

    Symbol shell = _d_define_receptor(G_vm->r->sem,"shell",__r_make_definitions(),DEV_COMPOSITORY_CONTEXT);
    Receptor *r = _r_new(v->sem,shell);
    Xaddr shellx = _v_new_receptor(G_vm,G_vm->r,shell,r);
    _v_activate(G_vm,shellx);

    // create stdin/out receptors

    Stream *output_stream = *osp = _st_new_unix_stream(output,0);
    Stream *input_stream = *isp = _st_new_unix_stream(input,1);

    Receptor *i_r = *irp = _r_makeStreamReaderReceptor(v->sem,TEST_STREAM_SYMBOL,input_stream,r->addr);
    Xaddr ix = _v_new_receptor(G_vm,G_vm->r,STREAM_READER,i_r);
    _v_activate(G_vm,ix);

    Receptor *o_r = *orp = _r_makeStreamWriterReceptor(v->sem,TEST_STREAM_SYMBOL,output_stream);
    Xaddr ox = _v_new_receptor(G_vm,G_vm->r,STREAM_WRITER,o_r);
    _v_activate(G_vm,ox);

    // create expectations for commands
    // (expect (on std_in LINE) action (send self (shell_command parsed from LINE))
    T *expect = _t_new_root(PATTERN);
    T *s = _t_news(expect,SEMTREX_GROUP,VERB);
    _sl(s,LINE);
    T *p = _t_new_root(SAY);
    ReceptorAddress to =  __r_get_self_address(r);

    __r_make_addr(p,TO_ADDRESS,to);
    _t_news(p,ASPECT_IDENT,DEFAULT_ASPECT);
    _t_news(p,CARRIER,SHELL_COMMAND);
    T *x = _t_newr(p,SHELL_COMMAND);
    int pt1[] = {2,1,TREE_PATH_TERMINATOR};
    _t_new(x,PARAM_REF,pt1,sizeof(int)*4);

    Process proc = _r_define_process(r,p,"send self command","long desc...",NULL);
    T *act = _t_newp(0,ACTION,proc);
    T* params = _t_new_root(PARAMS);
    T* slot = _t_newr(params,SLOT);
    _t_news(slot,USAGE,VERB);
    _r_add_expectation(r,DEFAULT_ASPECT,LINE,expect,act,params,0,NULL);

    // (expect (on flux SHELL_COMMAND:time) action(send std_out (convert_to_lines (send clock get_time))))
    // converting to use the clock protocol currently breaks the shell because the return value TICK
    // isn't getting passed to the right place.  This will get fixed when convert the shell to be
    // protocol based and thereby connect up the two protocols see #

    Protocol time = _sem_get_by_label(G_sem,"time",CLOCK_CONTEXT);
    T *code = _t_new_root(INITIATE_PROTOCOL);
    _t_news(code,PNAME,time);
    _t_news(code,WHICH_INTERACTION,tell_time);
    T *bindings = _t_newr(code,PROTOCOL_BINDINGS);
    T *res = _t_newr(bindings,RESOLUTION);
    T *w = _t_newr(res,WHICH_RECEPTOR);
    _t_news(w,ROLE,TIME_HEARER);
    __r_make_addr(w,ACTUAL_RECEPTOR,r->addr);
    res = _t_newr(bindings,RESOLUTION);
    w = _t_newr(res,WHICH_RECEPTOR);
    _t_news(w,ROLE,TIME_TELLER);
    ReceptorAddress clock_addr = {3}; // @todo bogus!!! fix getting clock address somehow
    __r_make_addr(w,ACTUAL_RECEPTOR,clock_addr);
    res = _t_newr(bindings,RESOLUTION);
    w = _t_newr(res,WHICH_PROCESS);
    _t_news(w,GOAL,REQUEST_HANDLER);
    T *noop = _t_new_root(NOOP);
    proc = _r_define_process(r,noop,"do nothing","long desc...",NULL);
    _t_news(w,ACTUAL_PROCESS,proc);

    addCommand(r,o_r->addr,"time","get time",code);

    // (expect (on flux SHELL_COMMAND:receptor) action (send std_out (convert_to_lines (send vmhost receptor-list))))

    code = _t_newi(0,MAGIC,MagicReceptors);
    addCommand(r,o_r->addr,"receptors","get receptor list",code);

    // (expect (on flux SHELL_COMMAND:receptor) action (send std_out (convert_to_lines (send vmhost shutdown)))
    code = _t_newi(0,MAGIC,MagicQuit);
    addCommand(r,o_r->addr,"quit","shut down the vmhost",code);

}

/** @}*/
