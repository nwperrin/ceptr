/**
 * @ingroup def
 *
 * @file base_defs.c
 * @brief auto-generated system definitions
 *
 * NOTE: this file is auto-generated by base_defs.pl
 *
 * @copyright Copyright (C) 2013-2015, The MetaCurrency Project (Eric Harris-Braun, Arthur Brock, et. al).  This file is part of the Ceptr platform and is released under the terms of the license contained in the file LICENSE (GPLv3).
 */

#include "base_defs.h"
#include "sys_defs.h"
#include "def.h"
#include "process.h"

void base_defs() {
  sT(SYS_CONTEXT,BIT,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,INTEGER,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,FLOAT,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,CHAR,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,CSTRING,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,SYMBOL,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,ENUM,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,TREE_PATH,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,XADDR,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,SURFACE,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,TREE,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,RECEPTOR,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,PROCESS,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,STRUCTURE,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,SCAPE,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,SEMTREX,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,STREAM,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,UUID,1,NULL_SYMBOL);
  sT(SYS_CONTEXT,BLOB,1,NULL_SYMBOL);
  sY(SYS_CONTEXT,STRUCTURES,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SYMBOLS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,PROCESSES,NULL_STRUCTURE);
  sY(SYS_CONTEXT,PROTOCOLS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SCAPES,NULL_STRUCTURE);
  sY(SYS_CONTEXT,ASPECTS,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_LIST_OF_STRUCTURES_AND_SYMBOLS_AND_PROCESSES_AND_ZERO_OR_MORE_OF_PROTOCOLS_AND_ZERO_OR_MORE_OF_SCAPES_AND_ZERO_OR_MORE_OF_ASPECTS,sT_STAR(sT_SEQ(6,sT_SYM(STRUCTURES),sT_SYM(SYMBOLS),sT_SYM(PROCESSES),sT_STAR(sT_SYM(PROTOCOLS)),sT_STAR(sT_SYM(SCAPES)),sT_STAR(sT_SYM(ASPECTS)))));
  sY(SYS_CONTEXT,DEFINITIONS,ZERO_OR_MORE_OF_LIST_OF_STRUCTURES_AND_SYMBOLS_AND_PROCESSES_AND_ZERO_OR_MORE_OF_PROTOCOLS_AND_ZERO_OR_MORE_OF_SCAPES_AND_ZERO_OR_MORE_OF_ASPECTS);
  sY(SYS_CONTEXT,STRUCTURE_SYMBOL,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STRUCTURE_SEQUENCE,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STRUCTURE_SYMBOL_SET,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STRUCTURE_OR,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STRUCTURE_ZERO_OR_MORE,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STRUCTURE_ONE_OR_MORE,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SYMBOL_OF_STRUCTURE,STRUCTURE);
  sY(SYS_CONTEXT,STRUCTURE_ANYTHING,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,STRUCTURE_DEF,sT_SET(9,sT_SYM(STRUCTURE_SYMBOL),sT_SYM(STRUCTURE_SEQUENCE),sT_SYM(STRUCTURE_SYMBOL_SET),sT_SYM(STRUCTURE_OR),sT_SYM(STRUCTURE_ZERO_OR_MORE),sT_SYM(STRUCTURE_ONE_OR_MORE),sT_SYM(STRUCTURE_ZERO_OR_ONE),sT_SYM(SYMBOL_OF_STRUCTURE),sT_SYM(STRUCTURE_ANYTHING)));
  sY(SYS_CONTEXT,STRUCTURE_LABEL,CSTRING);
  sTs(SYS_CONTEXT,TUPLE_OF_STRUCTURE_LABEL_AND_STRUCTURE_DEF,sT_SEQ(2,sT_SYM(STRUCTURE_LABEL),sT_SYM(STRUCTURE_DEF)));
  sY(SYS_CONTEXT,STRUCTURE_DEFINITION,TUPLE_OF_STRUCTURE_LABEL_AND_STRUCTURE_DEF);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_STRUCTURE_DEFINITION,sT_STAR(sT_SYM(STRUCTURE_DEFINITION)));
  sYs(SYS_CONTEXT,STRUCTURES,ZERO_OR_MORE_OF_STRUCTURE_DEFINITION);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_STRUCTURE_DEF,sT_PLUS(sT_SYM(STRUCTURE_DEF)));
  sYs(SYS_CONTEXT,STRUCTURE_SEQUENCE,ONE_OR_MORE_OF_STRUCTURE_DEF);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_STRUCTURE_SYMBOL,sT_PLUS(sT_SYM(STRUCTURE_SYMBOL)));
  sYs(SYS_CONTEXT,STRUCTURE_SYMBOL_SET,ONE_OR_MORE_OF_STRUCTURE_SYMBOL);
  sYs(SYS_CONTEXT,STRUCTURE_SYMBOL,SYMBOL);
  sTs(SYS_CONTEXT,PAIR_OF_STRUCTURE_DEF,sT_SEQ(2,sT_SYM(STRUCTURE_DEF),sT_SYM(STRUCTURE_DEF)));
  sYs(SYS_CONTEXT,STRUCTURE_OR,PAIR_OF_STRUCTURE_DEF);
  sYs(SYS_CONTEXT,STRUCTURE_ZERO_OR_MORE,STRUCTURE_DEF);
  sYs(SYS_CONTEXT,STRUCTURE_ONE_OR_MORE,STRUCTURE_DEF);
  sY(SYS_CONTEXT,STRUCTURE_ZERO_OR_ONE,STRUCTURE_DEF);
  sY(SYS_CONTEXT,SYMBOL_STRUCTURE,STRUCTURE);
  sY(SYS_CONTEXT,SYMBOL_LABEL,CSTRING);
  sTs(SYS_CONTEXT,TUPLE_OF_SYMBOL_LABEL_AND_SYMBOL_STRUCTURE,sT_SEQ(2,sT_SYM(SYMBOL_LABEL),sT_SYM(SYMBOL_STRUCTURE)));
  sY(SYS_CONTEXT,SYMBOL_DECLARATION,TUPLE_OF_SYMBOL_LABEL_AND_SYMBOL_STRUCTURE);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_SYMBOL_DECLARATION,sT_STAR(sT_SYM(SYMBOL_DECLARATION)));
  sYs(SYS_CONTEXT,SYMBOLS,ZERO_OR_MORE_OF_SYMBOL_DECLARATION);
  sY(SYS_CONTEXT,BOOLEAN,BIT);
  sY(SYS_CONTEXT,SEMTREX_MATCH_PATH,TREE_PATH);
  sY(SYS_CONTEXT,SEMTREX_SYMBOL_LITERAL,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_SYMBOL_LITERAL_NOT,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_SEQUENCE,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_OR,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_NOT,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_SYMBOL_ANY,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_ZERO_OR_MORE,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_ONE_OR_MORE,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_ZERO_OR_ONE,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_VALUE_LITERAL,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_VALUE_LITERAL_NOT,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_GROUP,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_WALK,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_DESCEND,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,SEMTREX_DEF,sT_SET(14,sT_SYM(SEMTREX_SYMBOL_LITERAL),sT_SYM(SEMTREX_SYMBOL_LITERAL_NOT),sT_SYM(SEMTREX_SEQUENCE),sT_SYM(SEMTREX_OR),sT_SYM(SEMTREX_NOT),sT_SYM(SEMTREX_SYMBOL_ANY),sT_SYM(SEMTREX_ZERO_OR_MORE),sT_SYM(SEMTREX_ONE_OR_MORE),sT_SYM(SEMTREX_ZERO_OR_ONE),sT_SYM(SEMTREX_VALUE_LITERAL),sT_SYM(SEMTREX_VALUE_LITERAL_NOT),sT_SYM(SEMTREX_GROUP),sT_SYM(SEMTREX_WALK),sT_SYM(SEMTREX_DESCEND)));
  sY(SYS_CONTEXT,SEMTREX_SYMBOL,SYMBOL);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_SEMTREX_SYMBOL,sT_PLUS(sT_SYM(SEMTREX_SYMBOL)));
  sY(SYS_CONTEXT,SEMTREX_SYMBOL_SET,ONE_OR_MORE_OF_SEMTREX_SYMBOL);
  sTs(SYS_CONTEXT,SEMTREX_SYMBOL_LITERAL_DEF,sT_SEQ(2,sT_OR(sT_SYM(SEMTREX_SYMBOL),sT_SYM(SEMTREX_SYMBOL_SET)),sT_STAR(sT_BANG)));
  sYs(SYS_CONTEXT,SEMTREX_SYMBOL_LITERAL,SEMTREX_SYMBOL_LITERAL_DEF);
  sYs(SYS_CONTEXT,SEMTREX_SYMBOL_LITERAL_NOT,SEMTREX_SYMBOL_LITERAL_DEF);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_SEMTREX_DEF,sT_PLUS(sT_SYM(SEMTREX_DEF)));
  sYs(SYS_CONTEXT,SEMTREX_SEQUENCE,ONE_OR_MORE_OF_SEMTREX_DEF);
  sTs(SYS_CONTEXT,PAIR_OF_SEMTREX_DEF,sT_SEQ(2,sT_SYM(SEMTREX_DEF),sT_SYM(SEMTREX_DEF)));
  sYs(SYS_CONTEXT,SEMTREX_OR,PAIR_OF_SEMTREX_DEF);
  sYs(SYS_CONTEXT,SEMTREX_NOT,SEMTREX_DEF);
  sTs(SYS_CONTEXT,ZERO_OR_ONE_OF_ANY_SYMBOL,sT_QMRK(sT_BANG));
  sYs(SYS_CONTEXT,SEMTREX_SYMBOL_ANY,ZERO_OR_ONE_OF_ANY_SYMBOL);
  sYs(SYS_CONTEXT,SEMTREX_ZERO_OR_MORE,SEMTREX_DEF);
  sYs(SYS_CONTEXT,SEMTREX_ONE_OR_MORE,SEMTREX_DEF);
  sYs(SYS_CONTEXT,SEMTREX_ZERO_OR_ONE,SEMTREX_DEF);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_ANY_SYMBOL,sT_PLUS(sT_BANG));
  sY(SYS_CONTEXT,SEMTREX_VALUE_SET,ONE_OR_MORE_OF_ANY_SYMBOL);
  sTs(SYS_CONTEXT,SEMTREX_VALUE_LITERAL_DEF,sT_OR(sT_BANG,sT_SYM(SEMTREX_VALUE_SET)));
  sYs(SYS_CONTEXT,SEMTREX_VALUE_LITERAL,SEMTREX_VALUE_LITERAL_DEF);
  sYs(SYS_CONTEXT,SEMTREX_VALUE_LITERAL_NOT,SEMTREX_VALUE_LITERAL_DEF);
  sYs(SYS_CONTEXT,SEMTREX_GROUP,SYMBOL);
  sYs(SYS_CONTEXT,SEMTREX_DESCEND,SEMTREX_DEF);
  sYs(SYS_CONTEXT,SEMTREX_WALK,SEMTREX_DEF);
  sY(SYS_CONTEXT,SEMTREX_MATCH,INTEGER);
  sY(SYS_CONTEXT,SEMTREX_MATCH_CURSOR,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_MATCH_RESULTS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SEMTREX_MATCH_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,SEMTREX_MATCH_SIBLINGS_COUNT,INTEGER);
  sY(SYS_CONTEXT,ASCII_CHAR,CHAR);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_ASCII_CHAR,sT_PLUS(sT_SYM(ASCII_CHAR)));
  sY(SYS_CONTEXT,ASCII_CHARS,ONE_OR_MORE_OF_ASCII_CHAR);
  sY(SYS_CONTEXT,RECEPTOR_XADDR,XADDR);
  sY(SYS_CONTEXT,EXPECTATIONS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SIGNALS,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,ASPECT,sT_SEQ(2,sT_SYM(EXPECTATIONS),sT_SYM(SIGNALS)));
  sY(SYS_CONTEXT,DEFAULT_ASPECT,ASPECT);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_STRUCTURE_OF_ASPECT,sT_PLUS(sT_PCNT(ASPECT)));
  sY(SYS_CONTEXT,FLUX,ONE_OR_MORE_OF_STRUCTURE_OF_ASPECT);
  sY(SYS_CONTEXT,SCAPE_SPEC,NULL_STRUCTURE);
  sY(SYS_CONTEXT,ASPECT_IDENT,SYMBOL);
  sY(SYS_CONTEXT,ASPECT_TYPE,BIT);
  sY(SYS_CONTEXT,ASPECT_LABEL,CSTRING);
  sTs(SYS_CONTEXT,TUPLE_OF_ASPECT_TYPE_AND_ASPECT_LABEL,sT_SEQ(2,sT_SYM(ASPECT_TYPE),sT_SYM(ASPECT_LABEL)));
  sY(SYS_CONTEXT,ASPECT_DEF,TUPLE_OF_ASPECT_TYPE_AND_ASPECT_LABEL);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_ASPECT_DEF,sT_PLUS(sT_SYM(ASPECT_DEF)));
  sYs(SYS_CONTEXT,ASPECTS,ONE_OR_MORE_OF_ASPECT_DEF);
  sY(SYS_CONTEXT,CARRIER,SYMBOL);
  sY(SYS_CONTEXT,BODY,TREE);
  sY(SYS_CONTEXT,SIGNAL_UUID,UUID);
  sY(SYS_CONTEXT,IN_RESPONSE_TO_UUID,UUID);
  sY(SYS_CONTEXT,INSTANCE_NUM,INTEGER);
  sY(SYS_CONTEXT,RECEPTOR_PATH,TREE_PATH);
  sTs(SYS_CONTEXT,RECEPTOR_ADDRESS,sT_OR(sT_SYM(INSTANCE_NUM),sT_SYM(RECEPTOR_PATH)));
  sY(SYS_CONTEXT,FROM_ADDRESS,RECEPTOR_ADDRESS);
  sY(SYS_CONTEXT,TO_ADDRESS,RECEPTOR_ADDRESS);
  sY(SYS_CONTEXT,END_CONDITIONS,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,LIST_OF_FROM_ADDRESS_AND_TO_ADDRESS_AND_ASPECT_IDENT_AND_CARRIER_AND_SIGNAL_UUID_AND_ZERO_OR_ONE_OF_LOGICAL_OR_OF_END_CONDITIONS_AND_IN_RESPONSE_TO_UUID,sT_SEQ(6,sT_SYM(FROM_ADDRESS),sT_SYM(TO_ADDRESS),sT_SYM(ASPECT_IDENT),sT_SYM(CARRIER),sT_SYM(SIGNAL_UUID),sT_QMRK(sT_OR(sT_SYM(END_CONDITIONS),sT_SYM(IN_RESPONSE_TO_UUID)))));
  sY(SYS_CONTEXT,ENVELOPE,LIST_OF_FROM_ADDRESS_AND_TO_ADDRESS_AND_ASPECT_IDENT_AND_CARRIER_AND_SIGNAL_UUID_AND_ZERO_OR_ONE_OF_LOGICAL_OR_OF_END_CONDITIONS_AND_IN_RESPONSE_TO_UUID);
  sTs(SYS_CONTEXT,TUPLE_OF_ENVELOPE_AND_BODY,sT_SEQ(2,sT_SYM(ENVELOPE),sT_SYM(BODY)));
  sY(SYS_CONTEXT,SIGNAL,TUPLE_OF_ENVELOPE_AND_BODY);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_SIGNAL,sT_STAR(sT_SYM(SIGNAL)));
  sYs(SYS_CONTEXT,SIGNALS,ZERO_OR_MORE_OF_SIGNAL);
  sY(SYS_CONTEXT,PENDING_SIGNALS,ZERO_OR_MORE_OF_SIGNAL);
  sY(SYS_CONTEXT,CODE_PATH,TREE_PATH);
  sY(SYS_CONTEXT,PROCESS_IDENT,INTEGER);
  sTs(SYS_CONTEXT,TUPLE_OF_PROCESS_IDENT_AND_CODE_PATH,sT_SEQ(2,sT_SYM(PROCESS_IDENT),sT_SYM(CODE_PATH)));
  sY(SYS_CONTEXT,WAKEUP_REFERENCE,TUPLE_OF_PROCESS_IDENT_AND_CODE_PATH);
  sTs(SYS_CONTEXT,LIST_OF_SIGNAL_UUID_AND_CARRIER_AND_WAKEUP_REFERENCE_AND_END_CONDITIONS,sT_SEQ(4,sT_SYM(SIGNAL_UUID),sT_SYM(CARRIER),sT_SYM(WAKEUP_REFERENCE),sT_SYM(END_CONDITIONS)));
  sY(SYS_CONTEXT,PENDING_RESPONSE,LIST_OF_SIGNAL_UUID_AND_CARRIER_AND_WAKEUP_REFERENCE_AND_END_CONDITIONS);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_PENDING_RESPONSE,sT_STAR(sT_SYM(PENDING_RESPONSE)));
  sY(SYS_CONTEXT,PENDING_RESPONSES,ZERO_OR_MORE_OF_PENDING_RESPONSE);
  sY(SYS_CONTEXT,RESPONSE_CARRIER,SYMBOL);
  sY(SYS_CONTEXT,PATTERN,SEMTREX_DEF);
  sY(SYS_CONTEXT,ACTION,PROCESS);
  sY(SYS_CONTEXT,PARAMS,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,LIST_OF_CARRIER_AND_PATTERN_AND_ACTION_AND_PARAMS_AND_END_CONDITIONS,sT_SEQ(5,sT_SYM(CARRIER),sT_SYM(PATTERN),sT_SYM(ACTION),sT_SYM(PARAMS),sT_SYM(END_CONDITIONS)));
  sY(SYS_CONTEXT,EXPECTATION,LIST_OF_CARRIER_AND_PATTERN_AND_ACTION_AND_PARAMS_AND_END_CONDITIONS);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_EXPECTATION,sT_STAR(sT_SYM(EXPECTATION)));
  sYs(SYS_CONTEXT,EXPECTATIONS,ZERO_OR_MORE_OF_EXPECTATION);
  sY(SYS_CONTEXT,INTERPOLATE_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,PROCESS_NAME,CSTRING);
  sY(SYS_CONTEXT,PROCESS_INTENTION,CSTRING);
  sY(SYS_CONTEXT,PROCESS_SIGNATURE,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,LIST_OF_PROCESS_NAME_AND_PROCESS_INTENTION_AND_PROCESS_AND_PROCESS_SIGNATURE,sT_SEQ(4,sT_SYM(PROCESS_NAME),sT_SYM(PROCESS_INTENTION),sT_SYM(PROCESS),sT_SYM(PROCESS_SIGNATURE)));
  sY(SYS_CONTEXT,PROCESS_CODING,LIST_OF_PROCESS_NAME_AND_PROCESS_INTENTION_AND_PROCESS_AND_PROCESS_SIGNATURE);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_PROCESS_CODING,sT_STAR(sT_SYM(PROCESS_CODING)));
  sYs(SYS_CONTEXT,PROCESSES,ZERO_OR_MORE_OF_PROCESS_CODING);
  sY(SYS_CONTEXT,SIGNATURE_LABEL,CSTRING);
  sY(SYS_CONTEXT,SIGNATURE_STRUCTURE,STRUCTURE);
  sY(SYS_CONTEXT,SIGNATURE_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,SIGNATURE_PROCESS,SYMBOL);
  sY(SYS_CONTEXT,SIGNATURE_PASSTHRU,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SIGNATURE_ANY,NULL_STRUCTURE);
  sY(SYS_CONTEXT,SIGNATURE_OPTIONAL,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,ONE_OF_SIGNATURE_STRUCTURE_AND_SIGNATURE_SYMBOL_AND_SIGNATURE_PROCESS_AND_SIGNATURE_PASSTHRU,sT_SET(4,sT_SYM(SIGNATURE_STRUCTURE),sT_SYM(SIGNATURE_SYMBOL),sT_SYM(SIGNATURE_PROCESS),sT_SYM(SIGNATURE_PASSTHRU)));
  sY(SYS_CONTEXT,SIGNATURE_OUTPUT_TYPE,ONE_OF_SIGNATURE_STRUCTURE_AND_SIGNATURE_SYMBOL_AND_SIGNATURE_PROCESS_AND_SIGNATURE_PASSTHRU);
  sTs(SYS_CONTEXT,SIGNATURE_SEMANTIC_VARIANTS,sT_SET(4,sT_SYM(SIGNATURE_STRUCTURE),sT_SYM(SIGNATURE_SYMBOL),sT_SYM(SIGNATURE_PROCESS),sT_SYM(SIGNATURE_ANY)));
  sTs(SYS_CONTEXT,TUPLE_OF_SIGNATURE_SEMANTIC_VARIANTS_AND_ZERO_OR_ONE_OF_SIGNATURE_OPTIONAL,sT_SEQ(2,sT_SYM(SIGNATURE_SEMANTIC_VARIANTS),sT_QMRK(sT_SYM(SIGNATURE_OPTIONAL))));
  sY(SYS_CONTEXT,SIGNATURE_INPUT_TYPE,TUPLE_OF_SIGNATURE_SEMANTIC_VARIANTS_AND_ZERO_OR_ONE_OF_SIGNATURE_OPTIONAL);
  sTs(SYS_CONTEXT,TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_INPUT_TYPE,sT_SEQ(2,sT_SYM(SIGNATURE_LABEL),sT_SYM(SIGNATURE_INPUT_TYPE)));
  sY(SYS_CONTEXT,INPUT_SIGNATURE,TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_INPUT_TYPE);
  sTs(SYS_CONTEXT,TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_OUTPUT_TYPE,sT_SEQ(2,sT_SYM(SIGNATURE_LABEL),sT_SYM(SIGNATURE_OUTPUT_TYPE)));
  sY(SYS_CONTEXT,OUTPUT_SIGNATURE,TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_OUTPUT_TYPE);
  sTs(SYS_CONTEXT,TUPLE_OF_OUTPUT_SIGNATURE_AND_ZERO_OR_MORE_OF_INPUT_SIGNATURE,sT_SEQ(2,sT_SYM(OUTPUT_SIGNATURE),sT_STAR(sT_SYM(INPUT_SIGNATURE))));
  sYs(SYS_CONTEXT,PROCESS_SIGNATURE,TUPLE_OF_OUTPUT_SIGNATURE_AND_ZERO_OR_MORE_OF_INPUT_SIGNATURE);
  sTs(SYS_CONTEXT,ANY_SYMBOL,sT_BANG);
  sY(SYS_CONTEXT,RUN_TREE,ANY_SYMBOL);
  sY(SYS_CONTEXT,PARAM_REF,TREE_PATH);
  sY(SYS_CONTEXT,SIGNAL_REF,TREE_PATH);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_ANY_SYMBOL,sT_STAR(sT_BANG));
  sYs(SYS_CONTEXT,PARAMS,ZERO_OR_MORE_OF_ANY_SYMBOL);
  sY(SYS_CONTEXT,RESULT_SYMBOL,SYMBOL);
  sY(SYS_CONTEXT,REDUCTION_ERROR_SYMBOL,SYMBOL);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_STRUCTURE_OF_PROTOCOL,sT_PLUS(sT_PCNT(PROTOCOL)));
  sYs(SYS_CONTEXT,PROTOCOLS,ONE_OR_MORE_OF_STRUCTURE_OF_PROTOCOL);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_STRUCTURE_OF_PROTOCOL_STEP,sT_PLUS(sT_PCNT(PROTOCOL_STEP)));
  sY(SYS_CONTEXT,STEPS,ONE_OR_MORE_OF_STRUCTURE_OF_PROTOCOL_STEP);
  sTs(SYS_CONTEXT,PROTOCOL_STEP,sT_SEQ(5,sT_SYM(CARRIER),sT_SYM(PATTERN),sT_SYM(ACTION),sT_QMRK(sT_SYM(PARAMS)),sT_QMRK(sT_SYM(END_CONDITIONS))));
  sY(SYS_CONTEXT,STEP_SYMBOL,SYMBOL);
  sTs(SYS_CONTEXT,SEQUENCE,sT_PLUS(sT_SYM(STEP_SYMBOL)));
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_SEQUENCE,sT_PLUS(sT_SYM(SEQUENCE)));
  sY(SYS_CONTEXT,SEQUENCES,ONE_OR_MORE_OF_SEQUENCE);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_STRUCTURE_OF_PROTOCOL_STEP,sT_STAR(sT_PCNT(PROTOCOL_STEP)));
  sY(SYS_CONTEXT,RESPONSE_STEPS,ZERO_OR_MORE_OF_STRUCTURE_OF_PROTOCOL_STEP);
  sT(SYS_CONTEXT,PROTOCOL,2,STEPS,SEQUENCES);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_STRUCTURE_OF_SCAPE,sT_STAR(sT_PCNT(SCAPE)));
  sYs(SYS_CONTEXT,SCAPES,ZERO_OR_MORE_OF_STRUCTURE_OF_SCAPE);
  sY(SYS_CONTEXT,MANIFEST_LABEL,CSTRING);
  sY(SYS_CONTEXT,MANIFEST_SPEC,SYMBOL);
  sTs(SYS_CONTEXT,TUPLE_OF_MANIFEST_LABEL_AND_MANIFEST_SPEC,sT_SEQ(2,sT_SYM(MANIFEST_LABEL),sT_SYM(MANIFEST_SPEC)));
  sY(SYS_CONTEXT,MANIFEST_PAIR,TUPLE_OF_MANIFEST_LABEL_AND_MANIFEST_SPEC);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_MANIFEST_PAIR,sT_PLUS(sT_SYM(MANIFEST_PAIR)));
  sY(SYS_CONTEXT,MANIFEST,ONE_OR_MORE_OF_MANIFEST_PAIR);
  sY(SYS_CONTEXT,RECEPTOR_IDENTIFIER,INTEGER);
  sTs(SYS_CONTEXT,LIST_OF_MANIFEST_AND_RECEPTOR_IDENTIFIER_AND_DEFINITIONS,sT_SEQ(3,sT_SYM(MANIFEST),sT_SYM(RECEPTOR_IDENTIFIER),sT_SYM(DEFINITIONS)));
  sY(SYS_CONTEXT,RECEPTOR_PACKAGE,LIST_OF_MANIFEST_AND_RECEPTOR_IDENTIFIER_AND_DEFINITIONS);
  sY(SYS_CONTEXT,INSTALLED_RECEPTOR,TREE);
  sTs(SYS_CONTEXT,TUPLE_OF_MANIFEST_LABEL_AND_ANY_SYMBOL,sT_SEQ(2,sT_SYM(MANIFEST_LABEL),sT_BANG));
  sY(SYS_CONTEXT,BINDING_PAIR,TUPLE_OF_MANIFEST_LABEL_AND_ANY_SYMBOL);
  sTs(SYS_CONTEXT,ONE_OR_MORE_OF_BINDING_PAIR,sT_PLUS(sT_SYM(BINDING_PAIR)));
  sY(SYS_CONTEXT,BINDINGS,ONE_OR_MORE_OF_BINDING_PAIR);
  sY(SYS_CONTEXT,RECEPTOR_ELAPSED_TIME,INTEGER);
  sTs(SYS_CONTEXT,LIST_OF_ZERO_OR_ONE_OF_RECEPTOR_ELAPSED_TIME,sT_SEQ(1,sT_QMRK(sT_SYM(RECEPTOR_ELAPSED_TIME))));
  sY(SYS_CONTEXT,RECEPTOR_STATE,LIST_OF_ZERO_OR_ONE_OF_RECEPTOR_ELAPSED_TIME);
  sT(SYS_CONTEXT,RECEPTOR_DEF,5,DEFINITIONS,FLUX,RECEPTOR_STATE,PENDING_SIGNALS,PENDING_RESPONSES);
  sY(SYS_CONTEXT,SERIALIZED_RECEPTOR,BLOB);
  sY(SYS_CONTEXT,VM_HOST_RECEPTOR,RECEPTOR);
  sTs(SYS_CONTEXT,ZERO_OR_MORE_OF_RECEPTOR_XADDR,sT_STAR(sT_SYM(RECEPTOR_XADDR)));
  sY(SYS_CONTEXT,ACTIVE_RECEPTORS,ZERO_OR_MORE_OF_RECEPTOR_XADDR);
  sTs(SYS_CONTEXT,LIST_OF_ACTIVE_RECEPTORS,sT_SEQ(1,sT_SYM(ACTIVE_RECEPTORS)));
  sY(SYS_CONTEXT,VM_HOST_STATE,LIST_OF_ACTIVE_RECEPTORS);
  sY(SYS_CONTEXT,CLOCK_RECEPTOR,RECEPTOR);
  sY(SYS_CONTEXT,COMPOSITORY,RECEPTOR);
  sY(SYS_CONTEXT,YEAR,INTEGER);
  sY(SYS_CONTEXT,MONTH,INTEGER);
  sY(SYS_CONTEXT,DAY,INTEGER);
  sY(SYS_CONTEXT,HOUR,INTEGER);
  sY(SYS_CONTEXT,MINUTE,INTEGER);
  sY(SYS_CONTEXT,SECOND,INTEGER);
  sT(SYS_CONTEXT,DATE,3,YEAR,MONTH,DAY);
  sT(SYS_CONTEXT,TIME,3,HOUR,MINUTE,SECOND);
  sY(SYS_CONTEXT,TODAY,DATE);
  sY(SYS_CONTEXT,NOW,TIME);
  sT(SYS_CONTEXT,TIMESTAMP,2,TODAY,NOW);
  sY(SYS_CONTEXT,TICK,TIMESTAMP);
  sY(SYS_CONTEXT,CLOCK_TELL_TIME,NULL_STRUCTURE);
  sY(SYS_CONTEXT,ERROR_LOCATION,TREE_PATH);
  sT(SYS_CONTEXT,REDUCTION_ERROR,1,ERROR_LOCATION);
  sY(SYS_CONTEXT,ZERO_DIVIDE_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,TOO_FEW_PARAMS_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,TOO_MANY_PARAMS_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,SIGNATURE_MISMATCH_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,NOT_A_PROCESS_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,NOT_IN_SIGNAL_CONTEXT_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,INCOMPATIBLE_TYPE_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,UNIX_ERRNO_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,DEAD_STREAM_READ_ERR,REDUCTION_ERROR);
  sY(SYS_CONTEXT,GET_XADDR,XADDR);
  sY(SYS_CONTEXT,TIMEOUT_AT,TIMESTAMP);
  sY(SYS_CONTEXT,COUNT,INTEGER);
  sY(SYS_CONTEXT,UNLIMITED,NULL_STRUCTURE);
  sTs(SYS_CONTEXT,LOGICAL_OR_OF_COUNT_AND_UNLIMITED,sT_OR(sT_SYM(COUNT),sT_SYM(UNLIMITED)));
  sY(SYS_CONTEXT,REPETITIONS,LOGICAL_OR_OF_COUNT_AND_UNLIMITED);
  sTs(SYS_CONTEXT,TUPLE_OF_ZERO_OR_ONE_OF_TIMEOUT_AT_AND_ZERO_OR_ONE_OF_REPETITIONS,sT_SEQ(2,sT_QMRK(sT_SYM(TIMEOUT_AT)),sT_QMRK(sT_SYM(REPETITIONS))));
  sYs(SYS_CONTEXT,END_CONDITIONS,TUPLE_OF_ZERO_OR_ONE_OF_TIMEOUT_AT_AND_ZERO_OR_ONE_OF_REPETITIONS);
  sP(SYS_CONTEXT,NOOP,"no-op","result",SIGNATURE_PASSTHRU,NULL_STRUCTURE,"do",SIGNATURE_ANY,NULL_STRUCTURE,0);
  sP(SYS_CONTEXT,GET,"get instance value","value",SIGNATURE_ANY,NULL_STRUCTURE,"what",SIGNATURE_SYMBOL,GET_XADDR,0);
  sP(SYS_CONTEXT,IF,"if","result",SIGNATURE_PASSTHRU,NULL_STRUCTURE,"condition",SIGNATURE_PROCESS,BOOLEAN,"then",SIGNATURE_ANY,NULL_STRUCTURE,"else",SIGNATURE_OPTIONAL,SIGNATURE_ANY,NULL_STRUCTURE,0);
  sP(SYS_CONTEXT,ITERATE,"iterate a process","result",SIGNATURE_PASSTHRU,NULL_STRUCTURE,"condtion",SIGNATURE_PROCESS,BOOLEAN,"do",SIGNATURE_ANY,NULL_STRUCTURE,0);
  sP(SYS_CONTEXT,SAY,"send a message to a receptor","signal id",SIGNATURE_SYMBOL,SIGNAL_UUID,"to",SIGNATURE_SYMBOL,RECEPTOR_ADDRESS,"on",SIGNATURE_SYMBOL,ASPECT_IDENT,"message",SIGNATURE_ANY,NULL_STRUCTURE,0);
  sP(SYS_CONTEXT,REQUEST,"send a request to a receptor","response",SIGNATURE_ANY,NULL_STRUCTURE,"of",SIGNATURE_SYMBOL,RECEPTOR_ADDRESS,"on",SIGNATURE_SYMBOL,ASPECT_IDENT,"message",SIGNATURE_ANY,NULL_STRUCTURE,"respond on",SIGNATURE_SYMBOL,RESPONSE_CARRIER,"until",SIGNATURE_OPTIONAL,SIGNATURE_SYMBOL,END_CONDITIONS,"callback",SIGNATURE_OPTIONAL,SIGNATURE_PROCESS,NULL_SYMBOL,0);
  sP(SYS_CONTEXT,LISTEN,"plant a listener","error",SIGNATURE_SYMBOL,REDUCTION_ERROR_SYMBOL,"on",SIGNATURE_SYMBOL,ASPECT_IDENT,"for",SIGNATURE_SYMBOL,CARRIER,"match",SIGNATURE_SYMBOL,PATTERN,"do",SIGNATURE_OPTIONAL,SIGNATURE_SYMBOL,ACTION,"with",SIGNATURE_OPTIONAL,SIGNATURE_SYMBOL,PARAMS,"until",SIGNATURE_OPTIONAL,SIGNATURE_SYMBOL,END_CONDITIONS,0);
  sP(SYS_CONTEXT,RESPOND,"respond to signal","response id",SIGNATURE_SYMBOL,SIGNAL_UUID,"response contents",SIGNATURE_ANY,NULL_STRUCTURE,0);
  sP(SYS_CONTEXT,QUOTE,"quote a process so that it can be passed as a value","result",SIGNATURE_PASSTHRU,NULL_STRUCTURE,"process",SIGNATURE_PROCESS,NULL_PROCESS,0);
  sP(SYS_CONTEXT,INTERPOLATE_FROM_MATCH,"interploate match result in place","result",SIGNATURE_STRUCTURE,TREE,0);
  sP(SYS_CONTEXT,RAISE,"raise reduction error","result",SIGNATURE_STRUCTURE,NULL_STRUCTURE,"error",SIGNATURE_SYMBOL,REDUCTION_ERROR_SYMBOL,0);
  sP(SYS_CONTEXT,STREAM_READ,"read from a stream","result",SIGNATURE_PASSTHRU,NULL_STRUCTURE,"stream",SIGNATURE_STRUCTURE,STREAM,"into",SIGNATURE_SYMBOL,RESULT_SYMBOL,0);
  sP(SYS_CONTEXT,STREAM_WRITE,"write to a stream","result",SIGNATURE_PASSTHRU,NULL_STRUCTURE,"stream",SIGNATURE_STRUCTURE,STREAM,"what",SIGNATURE_ANY,NULL_STRUCTURE,0);
  sP(SYS_CONTEXT,STREAM_ALIVE,"test if stream is alive for reading","alive",SIGNATURE_SYMBOL,BOOLEAN,"stream",SIGNATURE_STRUCTURE,STREAM,0);
  sP(SYS_CONTEXT,CONCAT_STR,"concatinate strings","concatenation",SIGNATURE_STRUCTURE,CSTRING,"into",SIGNATURE_SYMBOL,RESULT_SYMBOL,"str1",SIGNATURE_STRUCTURE,CSTRING,"str2",SIGNATURE_STRUCTURE,CSTRING,0);
  sP(SYS_CONTEXT,ADD_INT,"addition","sum",SIGNATURE_STRUCTURE,INTEGER,"augend",SIGNATURE_STRUCTURE,INTEGER,"addend",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,SUB_INT,"subtract","difference",SIGNATURE_STRUCTURE,INTEGER,"minuend",SIGNATURE_STRUCTURE,INTEGER,"subtrahend",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,MULT_INT,"multiply","product",SIGNATURE_STRUCTURE,INTEGER,"multiplicand",SIGNATURE_STRUCTURE,INTEGER,"multiplier",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,DIV_INT,"divide","quotient",SIGNATURE_STRUCTURE,INTEGER,"dividend",SIGNATURE_STRUCTURE,INTEGER,"divisor",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,MOD_INT,"modulo","remainder",SIGNATURE_STRUCTURE,INTEGER,"dividend",SIGNATURE_STRUCTURE,INTEGER,"divisor",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,EQ_INT,"test equality","equality",SIGNATURE_SYMBOL,BOOLEAN,"int1",SIGNATURE_STRUCTURE,INTEGER,"int2",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,LT_INT,"test less than","result",SIGNATURE_SYMBOL,BOOLEAN,"int1",SIGNATURE_STRUCTURE,INTEGER,"int2",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,GT_INT,"test greater than","result",SIGNATURE_SYMBOL,BOOLEAN,"int1",SIGNATURE_STRUCTURE,INTEGER,"int2",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,LTE_INT,"test less than or equal","result",SIGNATURE_SYMBOL,BOOLEAN,"int1",SIGNATURE_STRUCTURE,INTEGER,"int2",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,GTE_INT,"test greater than or equal","result",SIGNATURE_SYMBOL,BOOLEAN,"int1",SIGNATURE_STRUCTURE,INTEGER,"int2",SIGNATURE_STRUCTURE,INTEGER,0);
  sP(SYS_CONTEXT,MAGIC,"dark magic","result",SIGNATURE_ANY,NULL_STRUCTURE,0);
  sY(SYS_CONTEXT,STX_SL,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_OP,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_CP,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_SET,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_OS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_CS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_LABEL,CSTRING);
  sY(SYS_CONTEXT,STX_OG,CSTRING);
  sY(SYS_CONTEXT,STX_CG,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_EQ,CSTRING);
  sY(SYS_CONTEXT,STX_NEQ,CSTRING);
  sY(SYS_CONTEXT,STX_WALK,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_STAR,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_PLUS,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_Q,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_OR,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_COMMA,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_EXCEPT,CSTRING);
  sY(SYS_CONTEXT,STX_NOT,NULL_STRUCTURE);
  sY(SYS_CONTEXT,STX_VAL_S,CSTRING);
  sY(SYS_CONTEXT,STX_VAL_C,CHAR);
  sY(SYS_CONTEXT,STX_VAL_I,INTEGER);
  sY(SYS_CONTEXT,STX_VAL_F,FLOAT);
  sTs(SYS_CONTEXT,STX_TOKEN_LIST,sT_STAR(sT_SET(23,sT_SYM(STX_SL),sT_SYM(STX_OP),sT_SYM(STX_CP),sT_SYM(STX_SET),sT_SYM(STX_OS),sT_SYM(STX_CS),sT_SYM(STX_LABEL),sT_SYM(STX_OG),sT_SYM(STX_CG),sT_SYM(STX_EQ),sT_SYM(STX_NEQ),sT_SYM(STX_WALK),sT_SYM(STX_STAR),sT_SYM(STX_PLUS),sT_SYM(STX_Q),sT_SYM(STX_OR),sT_SYM(STX_COMMA),sT_SYM(STX_EXCEPT),sT_SYM(STX_NOT),sT_SYM(STX_VAL_S),sT_SYM(STX_VAL_C),sT_SYM(STX_VAL_I),sT_SYM(STX_VAL_F))));
  sY(SYS_CONTEXT,STX_TOKENS,STX_TOKEN_LIST);
  sY(SYS_CONTEXT,STX_SIBS,ONE_OR_MORE_OF_ANY_SYMBOL);
  sY(SYS_CONTEXT,STX_CHILD,ANY_SYMBOL);
  sY(SYS_CONTEXT,STX_POSTFIX,ANY_SYMBOL);
  sY(SYS_CONTEXT,TREE_DELTA_PATH,TREE_PATH);
  sY(SYS_CONTEXT,TREE_DELTA_VALUE,ANY_SYMBOL);
  sY(SYS_CONTEXT,TREE_DELTA_COUNT,INTEGER);
  sT(SYS_CONTEXT,TREE_DELTA,3,TREE_DELTA_PATH,TREE_DELTA_VALUE,TREE_DELTA_COUNT);
  sY(SYS_CONTEXT,TREE_DELTA_ADD,TREE_DELTA);
  sY(SYS_CONTEXT,TREE_DELTA_REPLACE,TREE_DELTA);
  sY(LOCAL_CONTEXT,LINE,CSTRING);
  sY(LOCAL_CONTEXT,VERB,CSTRING);
  sY(LOCAL_CONTEXT,COMMAND_PARAMETER,CSTRING);
  sTs(LOCAL_CONTEXT,COMMAND,sT_SEQ(2,sT_SYM(VERB),sT_STAR(sT_SYM(COMMAND_PARAMETER))));
  sY(LOCAL_CONTEXT,SHELL_COMMAND,COMMAND);
  sY(TEST_CONTEXT,TEST_INT_SYMBOL,INTEGER);
  sY(TEST_CONTEXT,TEST_INT_SYMBOL2,INTEGER);
  sY(TEST_CONTEXT,TEST_FLOAT_SYMBOL,FLOAT);
  sY(TEST_CONTEXT,TEST_STR_SYMBOL,CSTRING);
  sY(TEST_CONTEXT,TEST_TREE_SYMBOL,TREE);
  sY(TEST_CONTEXT,TEST_TREE_SYMBOL2,TREE);
  sY(TEST_CONTEXT,TEST_STREAM_SYMBOL,STREAM);
  sY(TEST_CONTEXT,TEST_NAME_SYMBOL,CSTRING);
  sY(TEST_CONTEXT,TEST_RECEPTOR_SYMBOL,RECEPTOR);
  sY(TEST_CONTEXT,TEST_ALPHABETIZE_SCAPE_SYMBOL,SCAPE);
  sY(TEST_CONTEXT,TEST_SYMBOL_SYMBOL,SYMBOL);
}
