/**
 * @file semtable.h
 * @brief header file for table for coordinating meaning across a vmhost
 *
 * @copyright Copyright (C) 2013-2015, The MetaCurrency Project (Eric Harris-Braun, Arthur Brock, et. al).  This file is part of the Ceptr platform and is released under the terms of the license contained in the file LICENSE (GPLv3).
 * @ingroup def
 */

#ifndef _CEPTR_SEMTABLE_H
#define _CEPTR_SEMTABLE_H

#include "ceptr_types.h"
#include "ceptr_error.h"

SemTable *_sem_new();
int _sem_new_context(SemTable *st,T *definitions);
void _sem_free(SemTable *st);
#define _sem_context(st,s) __sem_context(st,(s).context)
ContextStore *__sem_context(SemTable *st,Context c);
void _sem_free_context(SemTable *sem,Context c);
#define _sem_get_defs(sem,s) __sem_get_defs(sem,(s).semtype,(s).context)
T *__sem_get_defs(SemTable *st,SemanticType semtype,Context c);
#define _sem_get_def(sem,s) __sem_get_def(sem,(s).semtype,(s).context,(s).id)
T *__sem_get_def(SemTable *sem,SemanticType semtype,Context c,SemanticAddr i);
char *_sem_get_name(SemTable *st,SemanticID s);
Structure _sem_get_symbol_structure(SemTable *st,Symbol s);
SemanticID _sem_get_by_label(SemTable *sem,char *label,Context ctx);

#endif