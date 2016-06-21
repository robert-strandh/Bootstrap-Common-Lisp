#include "header.h"
#include "symbols.h"

extern struct header_struct class_built_in_class_header;

#define declare_class(name)                                 \
  extern struct header_struct class_ ## name ## _header;

#define reference_class(name)                               \
  (void *) &class_ ## name ## _header
