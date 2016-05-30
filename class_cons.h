#ifndef CLASS_CONS_H
#define CLASS_CONS_H

#include "header.h"

extern struct header_struct class_cons_header;

#define define_cons(name, car, cdr)		     \
                                                     \
void *                                               \
cons_ ## name ## _rack[] =                           \
  {                                                  \
    reference_symbol(NIL),                           \
    car,                                             \
    cdr,                                             \
  };                                                 \
                                                     \
struct header_struct cons_ ## name ## _header =      \
  {                                                  \
    &class_cons_header,                              \
    cons_ ## name ## _rack,		             \
  }

#define reference_cons(name)                         \
  (void *) &cons_ ## name ## _header

#endif
