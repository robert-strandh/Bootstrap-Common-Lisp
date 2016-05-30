#ifndef CLASS_SYMBOL_H
#define CLASS_SYMBOL_H

#include "class_string.h"

extern struct header_struct class_symbol_header;

#define define_symbol(name, package)			    \
                                                            \
void *                                                      \
symbol_ ## name ## _rack[] =                                \
  {                                                         \
    reference_symbol(NIL),                                  \
    reference_string(name),			            \
    reference_symbol(NIL),                                  \
  };                                                        \
                                                            \
struct header_struct symbol_ ## name ## _header =           \
  {                                                         \
    reference_symbol(NIL),	 		            \
    symbol_ ## name ## _rack,		                    \
  };

#define declare_symbol(name)                                \
  extern struct header_struct symbol_ ## name ## _header;

#define reference_symbol(name)                              \
  (void *) &symbol_ ## name ## _header

#endif
