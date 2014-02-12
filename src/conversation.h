#ifndef _CONVERSATION_H
#define _CONVERSATION_H

#define SIGNAL_BUFFER_SIZE 500
#define CONVERSATION_MAX_SIGNALS 100

#include <time.h>

typedef int Address;
typedef int Symbol;

typedef struct {
    Address from;
    Address to;
    time_t timestamp;
    Symbol noun;
    char surface;
} Signal;

typedef struct {
    unsigned int signal_count;
    Signal *signals[CONVERSATION_MAX_SIGNALS];
} Conversation;

Signal *_signal_new(Address from, Address to,time_t time,Symbol noun,void *surface, size_t size){
    size_t total_size = size + sizeof(Signal);
    Signal *s = malloc(total_size);
    s->from = from;
    s->to = to;
    s->noun = noun;
    s->timestamp = time;
    memcpy(&s->surface,surface,size);
    return s;
}

Conversation *conversation_new(Signal *s) {
    Conversation *c = malloc(sizeof(Conversation));
    c->signal_count = 0;
    conversation_append(c,s);
    return c;
}

int conversation_append(Conversation *c,Signal *s) {
    if (c->signal_count+1 == CONVERSATION_MAX_SIGNALS) return -1;
    c->signals[c->signal_count] = s;
    return c->signal_count++;
}

int conversation_delete(Conversation *c){
    while(c->signal_count > 0) {
	free(c->signals[--c->signal_count]);
    }
    free(c);
    return 0;
}

int conversation_signals(Conversation *c) {
    return c->signal_count;
}
#endif
