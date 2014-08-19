#include "label.h"
#include "tree.h"
#include "hashfn.h"



Label str2label(char* s) {
    return hashfn(s,strlen(s));
}

void _labelSet(LabelTable *table,Label l,int *path){
    table_elem *e;

    e = malloc(sizeof(struct table_elem));
    e->label = l;
    _t_pathcpy(e->path,path);

    HASH_ADD_INT(*table,label,e);
}

int *_labelGet(LabelTable *table, Label l){
    table_elem *e;
    HASH_FIND_INT( *table, &l, e );
    return e->path;
}

void labelSet(LabelTable *table, char *s,int *path) {
    _labelSet(table,str2label(s),path);
}

int *labelGet(LabelTable *table, char *s) {
    return _labelGet(table, str2label(s));
}

// TODO: label delete
void _labelDelete(LabelTable *table,Label l) {
}
void lableDelete(LabelTable *table,char *s) {
}

void lableTableFree(LabelTable *table) {
    table_elem *cur,*tmp;
    HASH_ITER(hh, *table, cur, tmp) {
	HASH_DEL(*table,cur);  /* delete; cur advances to next */
	free(cur);
    }
}
