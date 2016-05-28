#ifndef CLASS_SYMBOL_H
#define CLASS_SYMBOL_H

extern struct header_struct class_symbol_header;

#define reference_symbol(name)                       \
  (void *) &symbol_ ## name ## _header

#endif
