/**
 * @ingroup def
 *
 * @file base_defs.h
 * @brief auto-generated system definitions
 *
 * NOTE: this file is auto-generated by base_defs.pl
 *
 * @copyright Copyright (C) 2013-2015, The MetaCurrency Project (Eric Harris-Braun, Arthur Brock, et. al).  This file is part of the Ceptr platform and is released under the terms of the license contained in the file LICENSE (GPLv3).
 */

#ifndef _CEPTR_BASE_DEFS_H
#define _CEPTR_BASE_DEFS_H
#include "sys_defs.h"

void base_defs();

/**********************************************************************************/
// SYS:Symbol
enum SYSSymbolIDs {
    NULL_SYMBOL_ID,
    STRUCTURES_ID,
    SYMBOLS_ID,
    PROCESSES_ID,
    PROTOCOOLS_ID,
    SCAPES_ID,
    ASPECTS_ID,
    DEFINITIONS_ID,
    STRUCTURE_SYMBOL_ID,
    STRUCTURE_SEQUENCE_ID,
    STRUCTURE_SYMBOL_SET_ID,
    STRUCTURE_OR_ID,
    STRUCTURE_ZERO_OR_MORE_ID,
    STRUCTURE_ONE_OR_MORE_ID,
    STRUCTURE_ZERO_OR_ONE_ID,
    STRUCTURE_LABEL_ID,
    STRUCTURE_DEFINITION_ID,
    SYMBOL_STRUCTURE_ID,
    SYMBOL_LABEL_ID,
    SYMBOL_DECLARATION_ID,
    BOOLEAN_ID,
    SEMTREX_MATCH_PATH_ID,
    SEMTREX_SYMBOL_ID,
    SEMTREX_SYMBOL_SET_ID,
    SEMTREX_SYMBOL_LITERAL_ID,
    SEMTREX_SYMBOL_LITERAL_NOT_ID,
    SEMTREX_SEQUENCE_ID,
    SEMTREX_OR_ID,
    SEMTREX_NOT_ID,
    SEMTREX_SYMBOL_ANY_ID,
    SEMTREX_ZERO_OR_MORE_ID,
    SEMTREX_ONE_OR_MORE_ID,
    SEMTREX_ZERO_OR_ONE_ID,
    SEMTREX_VALUE_LITERAL_ID,
    SEMTREX_VALUE_LITERAL_NOT_ID,
    SEMTREX_VALUE_SET_ID,
    SEMTREX_GROUP_ID,
    SEMTREX_DESCEND_ID,
    SEMTREX_WALK_ID,
    SEMTREX_MATCH_ID,
    SEMTREX_MATCH_CURSOR_ID,
    SEMTREX_MATCH_RESULTS_ID,
    SEMTREX_MATCH_SYMBOL_ID,
    SEMTREX_MATCH_SIBLINGS_COUNT_ID,
    ASCII_CHAR_ID,
    ASCII_CHARS_ID,
    RECEPTOR_XADDR_ID,
    ASPECT_ID,
    FLUX_ID,
    SCAPE_SPEC_ID,
    ASPECT_DEF_ID,
    ASPECT_TYPE_ID,
    CARRIER_ID,
    BODY_ID,
    SIGNAL_UUID_ID,
    IN_RESPONSE_TO_UUID_ID,
    RECEPTOR_ADDRESS_ID,
    END_CONDITIONS_ID,
    ENVELOPE_ID,
    SIGNAL_ID,
    SIGNALS_ID,
    PENDING_SIGNALS_ID,
    CODE_PATH_ID,
    PROCESS_IDENT_ID,
    WAKEUP_REFERENCE_ID,
    PENDING_RESPONSE_ID,
    PENDING_RESPONSES_ID,
    RESPONSE_CARRIER_ID,
    EXPECTATION_ID,
    EXPECTATIONS_ID,
    PATTERN_ID,
    ACTION_ID,
    INTERPOLATE_SYMBOL_ID,
    PROCESS_NAME_ID,
    PROCESS_INTENTION_ID,
    PROCESS_SIGNATURE_ID,
    PROCESS_CODING_ID,
    SIGNATURE_LABEL_ID,
    SIGNATURE_STRUCTURE_ID,
    SIGNATURE_SYMBOL_ID,
    SIGNATURE_PROCESS_ID,
    SIGNATURE_PASSTHRU_ID,
    SIGNATURE_ANY_ID,
    SIGNATURE_OPTIONAL_ID,
    SIGNATURE_OUTPUT_TYPE_ID,
    SIGNATURE_INPUT_TYPE_ID,
    INPUT_SIGNATURE_ID,
    OUTPUT_SIGNATURE_ID,
    RUN_TREE_ID,
    PARAM_REF_ID,
    PARAMS_ID,
    RESULT_SYMBOL_ID,
    REDUCTION_ERROR_SYMBOL_ID,
    PROTOCOLS_ID,
    SEQUENCES_ID,
    STEP_SYMBOL_ID,
    STEPS_ID,
    INTERACTION_ID,
    INTERACTIONS_ID,
    STEP_ID,
    RESPONSE_STEPS_ID,
    MANIFEST_ID,
    MANIFEST_PAIR_ID,
    MANIFEST_LABEL_ID,
    MANIFEST_SPEC_ID,
    RECEPTOR_PACKAGE_ID,
    RECEPTOR_IDENTIFIER_ID,
    INSTALLED_RECEPTOR_ID,
    BINDINGS_ID,
    BINDING_PAIR_ID,
    RECEPTOR_ELAPSED_TIME_ID,
    RECEPTOR_STATE_ID,
    SERIALIZED_RECEPTOR_ID,
    VM_HOST_RECEPTOR_ID,
    ACTIVE_RECEPTORS_ID,
    VM_HOST_STATE_ID,
    CLOCK_RECEPTOR_ID,
    COMPOSITORY_ID,
    YEAR_ID,
    MONTH_ID,
    DAY_ID,
    HOUR_ID,
    MINUTE_ID,
    SECOND_ID,
    TODAY_ID,
    NOW_ID,
    TICK_ID,
    CLOCK_TELL_TIME_ID,
    ERROR_LOCATION_ID,
    ZERO_DIVIDE_ERR_ID,
    TOO_FEW_PARAMS_ERR_ID,
    TOO_MANY_PARAMS_ERR_ID,
    SIGNATURE_MISMATCH_ERR_ID,
    NOT_A_PROCESS_ERR_ID,
    NOT_IN_SIGNAL_CONTEXT_ERR_ID,
    INCOMPATIBLE_TYPE_ERR_ID,
    UNIX_ERRNO_ERR_ID,
    DEAD_STREAM_READ_ERR_ID,
    GET_XADDR_ID,
    TIMEOUT_AT_ID,
    COUNT_ID,
    UNLIMMITED_ID,
    REPETITIONS_ID,
    STX_TOKENS_ID,
    STX_SL_ID,
    STX_OP_ID,
    STX_CP_ID,
    STX_SET_ID,
    STX_OS_ID,
    STX_CS_ID,
    STX_LABEL_ID,
    STX_OG_ID,
    STX_CG_ID,
    STX_EQ_ID,
    STX_NEQ_ID,
    STX_WALK_ID,
    STX_STAR_ID,
    STX_PLUS_ID,
    STX_Q_ID,
    STX_OR_ID,
    STX_COMMA_ID,
    STX_EXCEPT_ID,
    STX_NOT_ID,
    STX_VAL_S_ID,
    STX_VAL_C_ID,
    STX_VAL_I_ID,
    STX_VAL_F_ID,
    STX_SIBS_ID,
    STX_CHILD_ID,
    STX_POSTFIX_ID,
    TREE_DELTA_PATH_ID,
    TREE_DELTA_VALUE_ID,
    TREE_DELTA_COUNT_ID,
    TREE_DELTA_ADD_ID,
    TREE_DELTA_REPLACE_ID,
    NUM_SYS_SYMBOLS
};
#define STRUCTURES G_contexts[SYS_CONTEXT].symbols[STRUCTURES_ID]
#define SYMBOLS G_contexts[SYS_CONTEXT].symbols[SYMBOLS_ID]
#define PROCESSES G_contexts[SYS_CONTEXT].symbols[PROCESSES_ID]
#define PROTOCOOLS G_contexts[SYS_CONTEXT].symbols[PROTOCOOLS_ID]
#define SCAPES G_contexts[SYS_CONTEXT].symbols[SCAPES_ID]
#define ASPECTS G_contexts[SYS_CONTEXT].symbols[ASPECTS_ID]
#define DEFINITIONS G_contexts[SYS_CONTEXT].symbols[DEFINITIONS_ID]
#define STRUCTURE_SYMBOL G_contexts[SYS_CONTEXT].symbols[STRUCTURE_SYMBOL_ID]
#define STRUCTURE_SEQUENCE G_contexts[SYS_CONTEXT].symbols[STRUCTURE_SEQUENCE_ID]
#define STRUCTURE_SYMBOL_SET G_contexts[SYS_CONTEXT].symbols[STRUCTURE_SYMBOL_SET_ID]
#define STRUCTURE_OR G_contexts[SYS_CONTEXT].symbols[STRUCTURE_OR_ID]
#define STRUCTURE_ZERO_OR_MORE G_contexts[SYS_CONTEXT].symbols[STRUCTURE_ZERO_OR_MORE_ID]
#define STRUCTURE_ONE_OR_MORE G_contexts[SYS_CONTEXT].symbols[STRUCTURE_ONE_OR_MORE_ID]
#define STRUCTURE_ZERO_OR_ONE G_contexts[SYS_CONTEXT].symbols[STRUCTURE_ZERO_OR_ONE_ID]
#define STRUCTURE_LABEL G_contexts[SYS_CONTEXT].symbols[STRUCTURE_LABEL_ID]
#define STRUCTURE_DEFINITION G_contexts[SYS_CONTEXT].symbols[STRUCTURE_DEFINITION_ID]
#define SYMBOL_STRUCTURE G_contexts[SYS_CONTEXT].symbols[SYMBOL_STRUCTURE_ID]
#define SYMBOL_LABEL G_contexts[SYS_CONTEXT].symbols[SYMBOL_LABEL_ID]
#define SYMBOL_DECLARATION G_contexts[SYS_CONTEXT].symbols[SYMBOL_DECLARATION_ID]
#define BOOLEAN G_contexts[SYS_CONTEXT].symbols[BOOLEAN_ID]
#define SEMTREX_MATCH_PATH G_contexts[SYS_CONTEXT].symbols[SEMTREX_MATCH_PATH_ID]
#define SEMTREX_SYMBOL G_contexts[SYS_CONTEXT].symbols[SEMTREX_SYMBOL_ID]
#define SEMTREX_SYMBOL_SET G_contexts[SYS_CONTEXT].symbols[SEMTREX_SYMBOL_SET_ID]
#define SEMTREX_SYMBOL_LITERAL G_contexts[SYS_CONTEXT].symbols[SEMTREX_SYMBOL_LITERAL_ID]
#define SEMTREX_SYMBOL_LITERAL_NOT G_contexts[SYS_CONTEXT].symbols[SEMTREX_SYMBOL_LITERAL_NOT_ID]
#define SEMTREX_SEQUENCE G_contexts[SYS_CONTEXT].symbols[SEMTREX_SEQUENCE_ID]
#define SEMTREX_OR G_contexts[SYS_CONTEXT].symbols[SEMTREX_OR_ID]
#define SEMTREX_NOT G_contexts[SYS_CONTEXT].symbols[SEMTREX_NOT_ID]
#define SEMTREX_SYMBOL_ANY G_contexts[SYS_CONTEXT].symbols[SEMTREX_SYMBOL_ANY_ID]
#define SEMTREX_ZERO_OR_MORE G_contexts[SYS_CONTEXT].symbols[SEMTREX_ZERO_OR_MORE_ID]
#define SEMTREX_ONE_OR_MORE G_contexts[SYS_CONTEXT].symbols[SEMTREX_ONE_OR_MORE_ID]
#define SEMTREX_ZERO_OR_ONE G_contexts[SYS_CONTEXT].symbols[SEMTREX_ZERO_OR_ONE_ID]
#define SEMTREX_VALUE_LITERAL G_contexts[SYS_CONTEXT].symbols[SEMTREX_VALUE_LITERAL_ID]
#define SEMTREX_VALUE_LITERAL_NOT G_contexts[SYS_CONTEXT].symbols[SEMTREX_VALUE_LITERAL_NOT_ID]
#define SEMTREX_VALUE_SET G_contexts[SYS_CONTEXT].symbols[SEMTREX_VALUE_SET_ID]
#define SEMTREX_GROUP G_contexts[SYS_CONTEXT].symbols[SEMTREX_GROUP_ID]
#define SEMTREX_DESCEND G_contexts[SYS_CONTEXT].symbols[SEMTREX_DESCEND_ID]
#define SEMTREX_WALK G_contexts[SYS_CONTEXT].symbols[SEMTREX_WALK_ID]
#define SEMTREX_MATCH G_contexts[SYS_CONTEXT].symbols[SEMTREX_MATCH_ID]
#define SEMTREX_MATCH_CURSOR G_contexts[SYS_CONTEXT].symbols[SEMTREX_MATCH_CURSOR_ID]
#define SEMTREX_MATCH_RESULTS G_contexts[SYS_CONTEXT].symbols[SEMTREX_MATCH_RESULTS_ID]
#define SEMTREX_MATCH_SYMBOL G_contexts[SYS_CONTEXT].symbols[SEMTREX_MATCH_SYMBOL_ID]
#define SEMTREX_MATCH_SIBLINGS_COUNT G_contexts[SYS_CONTEXT].symbols[SEMTREX_MATCH_SIBLINGS_COUNT_ID]
#define ASCII_CHAR G_contexts[SYS_CONTEXT].symbols[ASCII_CHAR_ID]
#define ASCII_CHARS G_contexts[SYS_CONTEXT].symbols[ASCII_CHARS_ID]
#define RECEPTOR_XADDR G_contexts[SYS_CONTEXT].symbols[RECEPTOR_XADDR_ID]
#define ASPECT G_contexts[SYS_CONTEXT].symbols[ASPECT_ID]
#define FLUX G_contexts[SYS_CONTEXT].symbols[FLUX_ID]
#define SCAPE_SPEC G_contexts[SYS_CONTEXT].symbols[SCAPE_SPEC_ID]
#define ASPECT_DEF G_contexts[SYS_CONTEXT].symbols[ASPECT_DEF_ID]
#define ASPECT_TYPE G_contexts[SYS_CONTEXT].symbols[ASPECT_TYPE_ID]
#define CARRIER G_contexts[SYS_CONTEXT].symbols[CARRIER_ID]
#define BODY G_contexts[SYS_CONTEXT].symbols[BODY_ID]
#define SIGNAL_UUID G_contexts[SYS_CONTEXT].symbols[SIGNAL_UUID_ID]
#define IN_RESPONSE_TO_UUID G_contexts[SYS_CONTEXT].symbols[IN_RESPONSE_TO_UUID_ID]
#define RECEPTOR_ADDRESS G_contexts[SYS_CONTEXT].symbols[RECEPTOR_ADDRESS_ID]
#define END_CONDITIONS G_contexts[SYS_CONTEXT].symbols[END_CONDITIONS_ID]
#define ENVELOPE G_contexts[SYS_CONTEXT].symbols[ENVELOPE_ID]
#define SIGNAL G_contexts[SYS_CONTEXT].symbols[SIGNAL_ID]
#define SIGNALS G_contexts[SYS_CONTEXT].symbols[SIGNALS_ID]
#define PENDING_SIGNALS G_contexts[SYS_CONTEXT].symbols[PENDING_SIGNALS_ID]
#define CODE_PATH G_contexts[SYS_CONTEXT].symbols[CODE_PATH_ID]
#define PROCESS_IDENT G_contexts[SYS_CONTEXT].symbols[PROCESS_IDENT_ID]
#define WAKEUP_REFERENCE G_contexts[SYS_CONTEXT].symbols[WAKEUP_REFERENCE_ID]
#define PENDING_RESPONSE G_contexts[SYS_CONTEXT].symbols[PENDING_RESPONSE_ID]
#define PENDING_RESPONSES G_contexts[SYS_CONTEXT].symbols[PENDING_RESPONSES_ID]
#define RESPONSE_CARRIER G_contexts[SYS_CONTEXT].symbols[RESPONSE_CARRIER_ID]
#define EXPECTATION G_contexts[SYS_CONTEXT].symbols[EXPECTATION_ID]
#define EXPECTATIONS G_contexts[SYS_CONTEXT].symbols[EXPECTATIONS_ID]
#define PATTERN G_contexts[SYS_CONTEXT].symbols[PATTERN_ID]
#define ACTION G_contexts[SYS_CONTEXT].symbols[ACTION_ID]
#define INTERPOLATE_SYMBOL G_contexts[SYS_CONTEXT].symbols[INTERPOLATE_SYMBOL_ID]
#define PROCESS_NAME G_contexts[SYS_CONTEXT].symbols[PROCESS_NAME_ID]
#define PROCESS_INTENTION G_contexts[SYS_CONTEXT].symbols[PROCESS_INTENTION_ID]
#define PROCESS_SIGNATURE G_contexts[SYS_CONTEXT].symbols[PROCESS_SIGNATURE_ID]
#define PROCESS_CODING G_contexts[SYS_CONTEXT].symbols[PROCESS_CODING_ID]
#define SIGNATURE_LABEL G_contexts[SYS_CONTEXT].symbols[SIGNATURE_LABEL_ID]
#define SIGNATURE_STRUCTURE G_contexts[SYS_CONTEXT].symbols[SIGNATURE_STRUCTURE_ID]
#define SIGNATURE_SYMBOL G_contexts[SYS_CONTEXT].symbols[SIGNATURE_SYMBOL_ID]
#define SIGNATURE_PROCESS G_contexts[SYS_CONTEXT].symbols[SIGNATURE_PROCESS_ID]
#define SIGNATURE_PASSTHRU G_contexts[SYS_CONTEXT].symbols[SIGNATURE_PASSTHRU_ID]
#define SIGNATURE_ANY G_contexts[SYS_CONTEXT].symbols[SIGNATURE_ANY_ID]
#define SIGNATURE_OPTIONAL G_contexts[SYS_CONTEXT].symbols[SIGNATURE_OPTIONAL_ID]
#define SIGNATURE_OUTPUT_TYPE G_contexts[SYS_CONTEXT].symbols[SIGNATURE_OUTPUT_TYPE_ID]
#define SIGNATURE_INPUT_TYPE G_contexts[SYS_CONTEXT].symbols[SIGNATURE_INPUT_TYPE_ID]
#define INPUT_SIGNATURE G_contexts[SYS_CONTEXT].symbols[INPUT_SIGNATURE_ID]
#define OUTPUT_SIGNATURE G_contexts[SYS_CONTEXT].symbols[OUTPUT_SIGNATURE_ID]
#define RUN_TREE G_contexts[SYS_CONTEXT].symbols[RUN_TREE_ID]
#define PARAM_REF G_contexts[SYS_CONTEXT].symbols[PARAM_REF_ID]
#define PARAMS G_contexts[SYS_CONTEXT].symbols[PARAMS_ID]
#define RESULT_SYMBOL G_contexts[SYS_CONTEXT].symbols[RESULT_SYMBOL_ID]
#define REDUCTION_ERROR_SYMBOL G_contexts[SYS_CONTEXT].symbols[REDUCTION_ERROR_SYMBOL_ID]
#define PROTOCOLS G_contexts[SYS_CONTEXT].symbols[PROTOCOLS_ID]
#define SEQUENCES G_contexts[SYS_CONTEXT].symbols[SEQUENCES_ID]
#define STEP_SYMBOL G_contexts[SYS_CONTEXT].symbols[STEP_SYMBOL_ID]
#define STEPS G_contexts[SYS_CONTEXT].symbols[STEPS_ID]
#define INTERACTION G_contexts[SYS_CONTEXT].symbols[INTERACTION_ID]
#define INTERACTIONS G_contexts[SYS_CONTEXT].symbols[INTERACTIONS_ID]
#define STEP G_contexts[SYS_CONTEXT].symbols[STEP_ID]
#define RESPONSE_STEPS G_contexts[SYS_CONTEXT].symbols[RESPONSE_STEPS_ID]
#define MANIFEST G_contexts[SYS_CONTEXT].symbols[MANIFEST_ID]
#define MANIFEST_PAIR G_contexts[SYS_CONTEXT].symbols[MANIFEST_PAIR_ID]
#define MANIFEST_LABEL G_contexts[SYS_CONTEXT].symbols[MANIFEST_LABEL_ID]
#define MANIFEST_SPEC G_contexts[SYS_CONTEXT].symbols[MANIFEST_SPEC_ID]
#define RECEPTOR_PACKAGE G_contexts[SYS_CONTEXT].symbols[RECEPTOR_PACKAGE_ID]
#define RECEPTOR_IDENTIFIER G_contexts[SYS_CONTEXT].symbols[RECEPTOR_IDENTIFIER_ID]
#define INSTALLED_RECEPTOR G_contexts[SYS_CONTEXT].symbols[INSTALLED_RECEPTOR_ID]
#define BINDINGS G_contexts[SYS_CONTEXT].symbols[BINDINGS_ID]
#define BINDING_PAIR G_contexts[SYS_CONTEXT].symbols[BINDING_PAIR_ID]
#define RECEPTOR_ELAPSED_TIME G_contexts[SYS_CONTEXT].symbols[RECEPTOR_ELAPSED_TIME_ID]
#define RECEPTOR_STATE G_contexts[SYS_CONTEXT].symbols[RECEPTOR_STATE_ID]
#define SERIALIZED_RECEPTOR G_contexts[SYS_CONTEXT].symbols[SERIALIZED_RECEPTOR_ID]
#define VM_HOST_RECEPTOR G_contexts[SYS_CONTEXT].symbols[VM_HOST_RECEPTOR_ID]
#define ACTIVE_RECEPTORS G_contexts[SYS_CONTEXT].symbols[ACTIVE_RECEPTORS_ID]
#define VM_HOST_STATE G_contexts[SYS_CONTEXT].symbols[VM_HOST_STATE_ID]
#define CLOCK_RECEPTOR G_contexts[SYS_CONTEXT].symbols[CLOCK_RECEPTOR_ID]
#define COMPOSITORY G_contexts[SYS_CONTEXT].symbols[COMPOSITORY_ID]
#define YEAR G_contexts[SYS_CONTEXT].symbols[YEAR_ID]
#define MONTH G_contexts[SYS_CONTEXT].symbols[MONTH_ID]
#define DAY G_contexts[SYS_CONTEXT].symbols[DAY_ID]
#define HOUR G_contexts[SYS_CONTEXT].symbols[HOUR_ID]
#define MINUTE G_contexts[SYS_CONTEXT].symbols[MINUTE_ID]
#define SECOND G_contexts[SYS_CONTEXT].symbols[SECOND_ID]
#define TODAY G_contexts[SYS_CONTEXT].symbols[TODAY_ID]
#define NOW G_contexts[SYS_CONTEXT].symbols[NOW_ID]
#define TICK G_contexts[SYS_CONTEXT].symbols[TICK_ID]
#define CLOCK_TELL_TIME G_contexts[SYS_CONTEXT].symbols[CLOCK_TELL_TIME_ID]
#define ERROR_LOCATION G_contexts[SYS_CONTEXT].symbols[ERROR_LOCATION_ID]
#define ZERO_DIVIDE_ERR G_contexts[SYS_CONTEXT].symbols[ZERO_DIVIDE_ERR_ID]
#define TOO_FEW_PARAMS_ERR G_contexts[SYS_CONTEXT].symbols[TOO_FEW_PARAMS_ERR_ID]
#define TOO_MANY_PARAMS_ERR G_contexts[SYS_CONTEXT].symbols[TOO_MANY_PARAMS_ERR_ID]
#define SIGNATURE_MISMATCH_ERR G_contexts[SYS_CONTEXT].symbols[SIGNATURE_MISMATCH_ERR_ID]
#define NOT_A_PROCESS_ERR G_contexts[SYS_CONTEXT].symbols[NOT_A_PROCESS_ERR_ID]
#define NOT_IN_SIGNAL_CONTEXT_ERR G_contexts[SYS_CONTEXT].symbols[NOT_IN_SIGNAL_CONTEXT_ERR_ID]
#define INCOMPATIBLE_TYPE_ERR G_contexts[SYS_CONTEXT].symbols[INCOMPATIBLE_TYPE_ERR_ID]
#define UNIX_ERRNO_ERR G_contexts[SYS_CONTEXT].symbols[UNIX_ERRNO_ERR_ID]
#define DEAD_STREAM_READ_ERR G_contexts[SYS_CONTEXT].symbols[DEAD_STREAM_READ_ERR_ID]
#define GET_XADDR G_contexts[SYS_CONTEXT].symbols[GET_XADDR_ID]
#define TIMEOUT_AT G_contexts[SYS_CONTEXT].symbols[TIMEOUT_AT_ID]
#define COUNT G_contexts[SYS_CONTEXT].symbols[COUNT_ID]
#define UNLIMMITED G_contexts[SYS_CONTEXT].symbols[UNLIMMITED_ID]
#define REPETITIONS G_contexts[SYS_CONTEXT].symbols[REPETITIONS_ID]
#define STX_TOKENS G_contexts[SYS_CONTEXT].symbols[STX_TOKENS_ID]
#define STX_SL G_contexts[SYS_CONTEXT].symbols[STX_SL_ID]
#define STX_OP G_contexts[SYS_CONTEXT].symbols[STX_OP_ID]
#define STX_CP G_contexts[SYS_CONTEXT].symbols[STX_CP_ID]
#define STX_SET G_contexts[SYS_CONTEXT].symbols[STX_SET_ID]
#define STX_OS G_contexts[SYS_CONTEXT].symbols[STX_OS_ID]
#define STX_CS G_contexts[SYS_CONTEXT].symbols[STX_CS_ID]
#define STX_LABEL G_contexts[SYS_CONTEXT].symbols[STX_LABEL_ID]
#define STX_OG G_contexts[SYS_CONTEXT].symbols[STX_OG_ID]
#define STX_CG G_contexts[SYS_CONTEXT].symbols[STX_CG_ID]
#define STX_EQ G_contexts[SYS_CONTEXT].symbols[STX_EQ_ID]
#define STX_NEQ G_contexts[SYS_CONTEXT].symbols[STX_NEQ_ID]
#define STX_WALK G_contexts[SYS_CONTEXT].symbols[STX_WALK_ID]
#define STX_STAR G_contexts[SYS_CONTEXT].symbols[STX_STAR_ID]
#define STX_PLUS G_contexts[SYS_CONTEXT].symbols[STX_PLUS_ID]
#define STX_Q G_contexts[SYS_CONTEXT].symbols[STX_Q_ID]
#define STX_OR G_contexts[SYS_CONTEXT].symbols[STX_OR_ID]
#define STX_COMMA G_contexts[SYS_CONTEXT].symbols[STX_COMMA_ID]
#define STX_EXCEPT G_contexts[SYS_CONTEXT].symbols[STX_EXCEPT_ID]
#define STX_NOT G_contexts[SYS_CONTEXT].symbols[STX_NOT_ID]
#define STX_VAL_S G_contexts[SYS_CONTEXT].symbols[STX_VAL_S_ID]
#define STX_VAL_C G_contexts[SYS_CONTEXT].symbols[STX_VAL_C_ID]
#define STX_VAL_I G_contexts[SYS_CONTEXT].symbols[STX_VAL_I_ID]
#define STX_VAL_F G_contexts[SYS_CONTEXT].symbols[STX_VAL_F_ID]
#define STX_SIBS G_contexts[SYS_CONTEXT].symbols[STX_SIBS_ID]
#define STX_CHILD G_contexts[SYS_CONTEXT].symbols[STX_CHILD_ID]
#define STX_POSTFIX G_contexts[SYS_CONTEXT].symbols[STX_POSTFIX_ID]
#define TREE_DELTA_PATH G_contexts[SYS_CONTEXT].symbols[TREE_DELTA_PATH_ID]
#define TREE_DELTA_VALUE G_contexts[SYS_CONTEXT].symbols[TREE_DELTA_VALUE_ID]
#define TREE_DELTA_COUNT G_contexts[SYS_CONTEXT].symbols[TREE_DELTA_COUNT_ID]
#define TREE_DELTA_ADD G_contexts[SYS_CONTEXT].symbols[TREE_DELTA_ADD_ID]
#define TREE_DELTA_REPLACE G_contexts[SYS_CONTEXT].symbols[TREE_DELTA_REPLACE_ID]

/**********************************************************************************/
// SYS:Structure
enum SYSStructureIDs {
    NULL_STRUCTURE_ID,
    BIT_ID,
    INTEGER_ID,
    FLOAT_ID,
    CHAR_ID,
    CSTRING_ID,
    SYMBOL_ID,
    ENUM_ID,
    TREE_PATH_ID,
    XADDR_ID,
    LIST_ID,
    SURFACE_ID,
    TREE_ID,
    RECEPTOR_ID,
    PROCESS_ID,
    STRUCTURE_ID,
    SCAPE_ID,
    SEMTREX_ID,
    STREAM_ID,
    UUID_ID,
    BLOB_ID,
    ZERO_OR_MORE_OF_LIST_OF_STRUCTURES_AND_SYMBOLS_AND_PROCESSES_AND_ZERO_OR_MORE_OF_PROTOCOOLS_AND_ZERO_OR_MORE_OF_SCAPES_AND_ZERO_OR_MORE_OF_ASPECTS_ID,
    STRUCTURE_DEF_ID,
    TUPLE_OF_STRUCTURE_LABEL_AND_STRUCTURE_DEF_ID,
    ZERO_OR_MORE_OF_STRUCTURE_DEFINITION_ID,
    ONE_OR_MORE_OF_STRUCTURE_DEF_ID,
    ONE_OR_MORE_OF_STRUCTURE_SYMBOL_ID,
    PAIR_OF_STRUCTURE_DEF_ID,
    TUPLE_OF_SYMBOL_LABEL_AND_SYMBOL_STRUCTURE_ID,
    ZERO_OR_MORE_OF_SYMBOL_DECLARATION_ID,
    ONE_OR_MORE_OF_SEMTREX_SYMBOL_ID,
    STX_SYMBOL_OR_SYMBOL_SET_ID,
    ONE_OR_MORE_OF_SEMTREX_ID,
    PAIR_OF_SEMTREX_ID,
    ONE_OR_MORE_OF_ASCII_CHAR_ID,
    LIST_OF_RECEPTOR_ADDRESS_AND_RECEPTOR_ADDRESS_AND_ASPECT_AND_CARRIER_AND_SIGNAL_UUID_AND_ZERO_OR_ONE_OF_LOGICAL_OR_OF_END_CONDITIONS_AND_IN_RESPONSE_TO_UUID_ID,
    TUPLE_OF_ENVELOPE_AND_BODY_ID,
    ZERO_OR_MORE_OF_SIGNAL_ID,
    TUPLE_OF_PROCESS_IDENT_AND_CODE_PATH_ID,
    LIST_OF_SIGNAL_UUID_AND_CARRIER_AND_WAKEUP_REFERENCE_AND_END_CONDITIONS_ID,
    ZERO_OR_MORE_OF_PENDING_RESPONSE_ID,
    ZERO_OR_MORE_OF_EXPECTATION_ID,
    LIST_OF_PROCESS_NAME_AND_PROCESS_INTENTION_AND_PROCESS_AND_PROCESS_SIGNATURE_ID,
    ZERO_OR_MORE_OF_PROCESS_CODING_ID,
    ONE_OF_SIGNATURE_STRUCTURE_AND_SIGNATURE_SYMBOL_AND_SIGNATURE_PROCESS_AND_SIGNATURE_PASSTHRU_ID,
    SIGNATURE_SEMANTIC_VARIANTS_ID,
    TUPLE_OF_SIGNATURE_SEMANTIC_VARIANTS_AND_ZERO_OR_ONE_OF_SIGNATURE_OPTIONAL_ID,
    TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_INPUT_TYPE_ID,
    TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_OUTPUT_TYPE_ID,
    TUPLE_OF_OUTPUT_SIGNATURE_AND_ZERO_OR_MORE_OF_INPUT_SIGNATURE_ID,
    SEQUENCE_ID,
    PROTOCOL_STEP_ID,
    ONE_OR_MORE_OF_INTERACTION_ID,
    PROTOCOL_ID,
    LIST_OF_ZERO_OR_ONE_OF_RECEPTOR_ELAPSED_TIME_ID,
    RECEPTOR_DEF_ID,
    ZERO_OR_MORE_OF_RECEPTOR_XADDR_ID,
    LIST_OF_ACTIVE_RECEPTORS_ID,
    DATE_ID,
    TIME_ID,
    TIMESTAMP_ID,
    REDUCTION_ERROR_ID,
    LOGICAL_OR_OF_COUNT_AND_UNLIMMITED_ID,
    TUPLE_OF_ZERO_OR_ONE_OF_TIMEOUT_AT_AND_ZERO_OR_ONE_OF_REPETITIONS_ID,
    TREE_DELTA_ID,
    NUM_SYS_STRUCTURES
};
#define BIT G_contexts[SYS_CONTEXT].structures[BIT_ID]
#define INTEGER G_contexts[SYS_CONTEXT].structures[INTEGER_ID]
#define FLOAT G_contexts[SYS_CONTEXT].structures[FLOAT_ID]
#define CHAR G_contexts[SYS_CONTEXT].structures[CHAR_ID]
#define CSTRING G_contexts[SYS_CONTEXT].structures[CSTRING_ID]
#define SYMBOL G_contexts[SYS_CONTEXT].structures[SYMBOL_ID]
#define ENUM G_contexts[SYS_CONTEXT].structures[ENUM_ID]
#define TREE_PATH G_contexts[SYS_CONTEXT].structures[TREE_PATH_ID]
#define XADDR G_contexts[SYS_CONTEXT].structures[XADDR_ID]
#define LIST G_contexts[SYS_CONTEXT].structures[LIST_ID]
#define SURFACE G_contexts[SYS_CONTEXT].structures[SURFACE_ID]
#define TREE G_contexts[SYS_CONTEXT].structures[TREE_ID]
#define RECEPTOR G_contexts[SYS_CONTEXT].structures[RECEPTOR_ID]
#define PROCESS G_contexts[SYS_CONTEXT].structures[PROCESS_ID]
#define STRUCTURE G_contexts[SYS_CONTEXT].structures[STRUCTURE_ID]
#define SCAPE G_contexts[SYS_CONTEXT].structures[SCAPE_ID]
#define SEMTREX G_contexts[SYS_CONTEXT].structures[SEMTREX_ID]
#define STREAM G_contexts[SYS_CONTEXT].structures[STREAM_ID]
#define UUID G_contexts[SYS_CONTEXT].structures[UUID_ID]
#define BLOB G_contexts[SYS_CONTEXT].structures[BLOB_ID]
#define ZERO_OR_MORE_OF_LIST_OF_STRUCTURES_AND_SYMBOLS_AND_PROCESSES_AND_ZERO_OR_MORE_OF_PROTOCOOLS_AND_ZERO_OR_MORE_OF_SCAPES_AND_ZERO_OR_MORE_OF_ASPECTS G_contexts[SYS_CONTEXT].structures[ZERO_OR_MORE_OF_LIST_OF_STRUCTURES_AND_SYMBOLS_AND_PROCESSES_AND_ZERO_OR_MORE_OF_PROTOCOOLS_AND_ZERO_OR_MORE_OF_SCAPES_AND_ZERO_OR_MORE_OF_ASPECTS_ID]
#define STRUCTURE_DEF G_contexts[SYS_CONTEXT].structures[STRUCTURE_DEF_ID]
#define TUPLE_OF_STRUCTURE_LABEL_AND_STRUCTURE_DEF G_contexts[SYS_CONTEXT].structures[TUPLE_OF_STRUCTURE_LABEL_AND_STRUCTURE_DEF_ID]
#define ZERO_OR_MORE_OF_STRUCTURE_DEFINITION G_contexts[SYS_CONTEXT].structures[ZERO_OR_MORE_OF_STRUCTURE_DEFINITION_ID]
#define ONE_OR_MORE_OF_STRUCTURE_DEF G_contexts[SYS_CONTEXT].structures[ONE_OR_MORE_OF_STRUCTURE_DEF_ID]
#define ONE_OR_MORE_OF_STRUCTURE_SYMBOL G_contexts[SYS_CONTEXT].structures[ONE_OR_MORE_OF_STRUCTURE_SYMBOL_ID]
#define PAIR_OF_STRUCTURE_DEF G_contexts[SYS_CONTEXT].structures[PAIR_OF_STRUCTURE_DEF_ID]
#define TUPLE_OF_SYMBOL_LABEL_AND_SYMBOL_STRUCTURE G_contexts[SYS_CONTEXT].structures[TUPLE_OF_SYMBOL_LABEL_AND_SYMBOL_STRUCTURE_ID]
#define ZERO_OR_MORE_OF_SYMBOL_DECLARATION G_contexts[SYS_CONTEXT].structures[ZERO_OR_MORE_OF_SYMBOL_DECLARATION_ID]
#define ONE_OR_MORE_OF_SEMTREX_SYMBOL G_contexts[SYS_CONTEXT].structures[ONE_OR_MORE_OF_SEMTREX_SYMBOL_ID]
#define STX_SYMBOL_OR_SYMBOL_SET G_contexts[SYS_CONTEXT].structures[STX_SYMBOL_OR_SYMBOL_SET_ID]
#define ONE_OR_MORE_OF_SEMTREX G_contexts[SYS_CONTEXT].structures[ONE_OR_MORE_OF_SEMTREX_ID]
#define PAIR_OF_SEMTREX G_contexts[SYS_CONTEXT].structures[PAIR_OF_SEMTREX_ID]
#define ONE_OR_MORE_OF_ASCII_CHAR G_contexts[SYS_CONTEXT].structures[ONE_OR_MORE_OF_ASCII_CHAR_ID]
#define LIST_OF_RECEPTOR_ADDRESS_AND_RECEPTOR_ADDRESS_AND_ASPECT_AND_CARRIER_AND_SIGNAL_UUID_AND_ZERO_OR_ONE_OF_LOGICAL_OR_OF_END_CONDITIONS_AND_IN_RESPONSE_TO_UUID G_contexts[SYS_CONTEXT].structures[LIST_OF_RECEPTOR_ADDRESS_AND_RECEPTOR_ADDRESS_AND_ASPECT_AND_CARRIER_AND_SIGNAL_UUID_AND_ZERO_OR_ONE_OF_LOGICAL_OR_OF_END_CONDITIONS_AND_IN_RESPONSE_TO_UUID_ID]
#define TUPLE_OF_ENVELOPE_AND_BODY G_contexts[SYS_CONTEXT].structures[TUPLE_OF_ENVELOPE_AND_BODY_ID]
#define ZERO_OR_MORE_OF_SIGNAL G_contexts[SYS_CONTEXT].structures[ZERO_OR_MORE_OF_SIGNAL_ID]
#define TUPLE_OF_PROCESS_IDENT_AND_CODE_PATH G_contexts[SYS_CONTEXT].structures[TUPLE_OF_PROCESS_IDENT_AND_CODE_PATH_ID]
#define LIST_OF_SIGNAL_UUID_AND_CARRIER_AND_WAKEUP_REFERENCE_AND_END_CONDITIONS G_contexts[SYS_CONTEXT].structures[LIST_OF_SIGNAL_UUID_AND_CARRIER_AND_WAKEUP_REFERENCE_AND_END_CONDITIONS_ID]
#define ZERO_OR_MORE_OF_PENDING_RESPONSE G_contexts[SYS_CONTEXT].structures[ZERO_OR_MORE_OF_PENDING_RESPONSE_ID]
#define ZERO_OR_MORE_OF_EXPECTATION G_contexts[SYS_CONTEXT].structures[ZERO_OR_MORE_OF_EXPECTATION_ID]
#define LIST_OF_PROCESS_NAME_AND_PROCESS_INTENTION_AND_PROCESS_AND_PROCESS_SIGNATURE G_contexts[SYS_CONTEXT].structures[LIST_OF_PROCESS_NAME_AND_PROCESS_INTENTION_AND_PROCESS_AND_PROCESS_SIGNATURE_ID]
#define ZERO_OR_MORE_OF_PROCESS_CODING G_contexts[SYS_CONTEXT].structures[ZERO_OR_MORE_OF_PROCESS_CODING_ID]
#define ONE_OF_SIGNATURE_STRUCTURE_AND_SIGNATURE_SYMBOL_AND_SIGNATURE_PROCESS_AND_SIGNATURE_PASSTHRU G_contexts[SYS_CONTEXT].structures[ONE_OF_SIGNATURE_STRUCTURE_AND_SIGNATURE_SYMBOL_AND_SIGNATURE_PROCESS_AND_SIGNATURE_PASSTHRU_ID]
#define SIGNATURE_SEMANTIC_VARIANTS G_contexts[SYS_CONTEXT].structures[SIGNATURE_SEMANTIC_VARIANTS_ID]
#define TUPLE_OF_SIGNATURE_SEMANTIC_VARIANTS_AND_ZERO_OR_ONE_OF_SIGNATURE_OPTIONAL G_contexts[SYS_CONTEXT].structures[TUPLE_OF_SIGNATURE_SEMANTIC_VARIANTS_AND_ZERO_OR_ONE_OF_SIGNATURE_OPTIONAL_ID]
#define TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_INPUT_TYPE G_contexts[SYS_CONTEXT].structures[TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_INPUT_TYPE_ID]
#define TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_OUTPUT_TYPE G_contexts[SYS_CONTEXT].structures[TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_OUTPUT_TYPE_ID]
#define TUPLE_OF_OUTPUT_SIGNATURE_AND_ZERO_OR_MORE_OF_INPUT_SIGNATURE G_contexts[SYS_CONTEXT].structures[TUPLE_OF_OUTPUT_SIGNATURE_AND_ZERO_OR_MORE_OF_INPUT_SIGNATURE_ID]
#define SEQUENCE G_contexts[SYS_CONTEXT].structures[SEQUENCE_ID]
#define PROTOCOL_STEP G_contexts[SYS_CONTEXT].structures[PROTOCOL_STEP_ID]
#define ONE_OR_MORE_OF_INTERACTION G_contexts[SYS_CONTEXT].structures[ONE_OR_MORE_OF_INTERACTION_ID]
#define PROTOCOL G_contexts[SYS_CONTEXT].structures[PROTOCOL_ID]
#define LIST_OF_ZERO_OR_ONE_OF_RECEPTOR_ELAPSED_TIME G_contexts[SYS_CONTEXT].structures[LIST_OF_ZERO_OR_ONE_OF_RECEPTOR_ELAPSED_TIME_ID]
#define RECEPTOR_DEF G_contexts[SYS_CONTEXT].structures[RECEPTOR_DEF_ID]
#define ZERO_OR_MORE_OF_RECEPTOR_XADDR G_contexts[SYS_CONTEXT].structures[ZERO_OR_MORE_OF_RECEPTOR_XADDR_ID]
#define LIST_OF_ACTIVE_RECEPTORS G_contexts[SYS_CONTEXT].structures[LIST_OF_ACTIVE_RECEPTORS_ID]
#define DATE G_contexts[SYS_CONTEXT].structures[DATE_ID]
#define TIME G_contexts[SYS_CONTEXT].structures[TIME_ID]
#define TIMESTAMP G_contexts[SYS_CONTEXT].structures[TIMESTAMP_ID]
#define REDUCTION_ERROR G_contexts[SYS_CONTEXT].structures[REDUCTION_ERROR_ID]
#define LOGICAL_OR_OF_COUNT_AND_UNLIMMITED G_contexts[SYS_CONTEXT].structures[LOGICAL_OR_OF_COUNT_AND_UNLIMMITED_ID]
#define TUPLE_OF_ZERO_OR_ONE_OF_TIMEOUT_AT_AND_ZERO_OR_ONE_OF_REPETITIONS G_contexts[SYS_CONTEXT].structures[TUPLE_OF_ZERO_OR_ONE_OF_TIMEOUT_AT_AND_ZERO_OR_ONE_OF_REPETITIONS_ID]
#define TREE_DELTA G_contexts[SYS_CONTEXT].structures[TREE_DELTA_ID]

/**********************************************************************************/
// SYS:Process
enum SYSProcessIDs {
    NULL_PROCESS_ID,
    NOOP_ID,
    GET_ID,
    IF_ID,
    ITERATE_ID,
    SAY_ID,
    REQUEST_ID,
    LISTEN_ID,
    RESPOND_ID,
    QUOTE_ID,
    INTERPOLATE_FROM_MATCH_ID,
    RAISE_ID,
    STREAM_READ_ID,
    STREAM_WRITE_ID,
    STREAM_ALIVE_ID,
    CONCAT_STR_ID,
    ADD_INT_ID,
    SUB_INT_ID,
    MULT_INT_ID,
    DIV_INT_ID,
    MOD_INT_ID,
    EQ_INT_ID,
    LT_INT_ID,
    GT_INT_ID,
    LTE_INT_ID,
    GTE_INT_ID,
    MAGIC_ID,
    NUM_SYS_PROCESSES
};
#define NOOP G_contexts[SYS_CONTEXT].processes[NOOP_ID]
#define GET G_contexts[SYS_CONTEXT].processes[GET_ID]
#define IF G_contexts[SYS_CONTEXT].processes[IF_ID]
#define ITERATE G_contexts[SYS_CONTEXT].processes[ITERATE_ID]
#define SAY G_contexts[SYS_CONTEXT].processes[SAY_ID]
#define REQUEST G_contexts[SYS_CONTEXT].processes[REQUEST_ID]
#define LISTEN G_contexts[SYS_CONTEXT].processes[LISTEN_ID]
#define RESPOND G_contexts[SYS_CONTEXT].processes[RESPOND_ID]
#define QUOTE G_contexts[SYS_CONTEXT].processes[QUOTE_ID]
#define INTERPOLATE_FROM_MATCH G_contexts[SYS_CONTEXT].processes[INTERPOLATE_FROM_MATCH_ID]
#define RAISE G_contexts[SYS_CONTEXT].processes[RAISE_ID]
#define STREAM_READ G_contexts[SYS_CONTEXT].processes[STREAM_READ_ID]
#define STREAM_WRITE G_contexts[SYS_CONTEXT].processes[STREAM_WRITE_ID]
#define STREAM_ALIVE G_contexts[SYS_CONTEXT].processes[STREAM_ALIVE_ID]
#define CONCAT_STR G_contexts[SYS_CONTEXT].processes[CONCAT_STR_ID]
#define ADD_INT G_contexts[SYS_CONTEXT].processes[ADD_INT_ID]
#define SUB_INT G_contexts[SYS_CONTEXT].processes[SUB_INT_ID]
#define MULT_INT G_contexts[SYS_CONTEXT].processes[MULT_INT_ID]
#define DIV_INT G_contexts[SYS_CONTEXT].processes[DIV_INT_ID]
#define MOD_INT G_contexts[SYS_CONTEXT].processes[MOD_INT_ID]
#define EQ_INT G_contexts[SYS_CONTEXT].processes[EQ_INT_ID]
#define LT_INT G_contexts[SYS_CONTEXT].processes[LT_INT_ID]
#define GT_INT G_contexts[SYS_CONTEXT].processes[GT_INT_ID]
#define LTE_INT G_contexts[SYS_CONTEXT].processes[LTE_INT_ID]
#define GTE_INT G_contexts[SYS_CONTEXT].processes[GTE_INT_ID]
#define MAGIC G_contexts[SYS_CONTEXT].processes[MAGIC_ID]

/**********************************************************************************/
// TEST:Symbol
enum TESTSymbolIDs {
    NULL_TEST_SYMBOL_ID,
    TEST_INT_SYMBOL_ID,
    TEST_INT_SYMBOL2_ID,
    TEST_FLOAT_SYMBOL_ID,
    TEST_STR_SYMBOL_ID,
    TEST_TREE_SYMBOL_ID,
    TEST_TREE_SYMBOL2_ID,
    TEST_STREAM_SYMBOL_ID,
    TEST_NAME_SYMBOL_ID,
    TEST_RECEPTOR_SYMBOL_ID,
    TEST_ALPHABETIZE_SCAPE_SYMBOL_ID,
    TEST_SYMBOL_SYMBOL_ID,
    NUM_TEST_SYMBOLS
};
#define TEST_INT_SYMBOL G_contexts[TEST_CONTEXT].symbols[TEST_INT_SYMBOL_ID]
#define TEST_INT_SYMBOL2 G_contexts[TEST_CONTEXT].symbols[TEST_INT_SYMBOL2_ID]
#define TEST_FLOAT_SYMBOL G_contexts[TEST_CONTEXT].symbols[TEST_FLOAT_SYMBOL_ID]
#define TEST_STR_SYMBOL G_contexts[TEST_CONTEXT].symbols[TEST_STR_SYMBOL_ID]
#define TEST_TREE_SYMBOL G_contexts[TEST_CONTEXT].symbols[TEST_TREE_SYMBOL_ID]
#define TEST_TREE_SYMBOL2 G_contexts[TEST_CONTEXT].symbols[TEST_TREE_SYMBOL2_ID]
#define TEST_STREAM_SYMBOL G_contexts[TEST_CONTEXT].symbols[TEST_STREAM_SYMBOL_ID]
#define TEST_NAME_SYMBOL G_contexts[TEST_CONTEXT].symbols[TEST_NAME_SYMBOL_ID]
#define TEST_RECEPTOR_SYMBOL G_contexts[TEST_CONTEXT].symbols[TEST_RECEPTOR_SYMBOL_ID]
#define TEST_ALPHABETIZE_SCAPE_SYMBOL G_contexts[TEST_CONTEXT].symbols[TEST_ALPHABETIZE_SCAPE_SYMBOL_ID]
#define TEST_SYMBOL_SYMBOL G_contexts[TEST_CONTEXT].symbols[TEST_SYMBOL_SYMBOL_ID]

/**********************************************************************************/
// LOCAL:Symbol
enum LOCALSymbolIDs {
    NULL_LOCAL_SYMBOL_ID,
    LINE_ID,
    VERB_ID,
    COMMAND_PARAMETER_ID,
    SHELL_COMMAND_ID,
    NUM_LOCAL_SYMBOLS
};
#define LINE G_contexts[LOCAL_CONTEXT].symbols[LINE_ID]
#define VERB G_contexts[LOCAL_CONTEXT].symbols[VERB_ID]
#define COMMAND_PARAMETER G_contexts[LOCAL_CONTEXT].symbols[COMMAND_PARAMETER_ID]
#define SHELL_COMMAND G_contexts[LOCAL_CONTEXT].symbols[SHELL_COMMAND_ID]

/**********************************************************************************/
// LOCAL:Structure
enum LOCALStructureIDs {
    NULL_LOCAL_STRUCTURE_ID,
    COMMAND_ID,
    NUM_LOCAL_STRUCTURES
};
#define COMMAND G_contexts[LOCAL_CONTEXT].structures[COMMAND_ID]

#endif
