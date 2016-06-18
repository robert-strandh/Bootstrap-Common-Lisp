#include "header.h"
#include "symbols.h"

extern struct header_struct class_built_in_class_header;

#define define_class(name, metaclass_name)	            \
                                                            \
void *                                                      \
class_ ## name ## _rack[] =                                 \
  {                                                         \
    reference_symbol(NIL),                                  \
  };                                                        \
                                                            \
struct header_struct class_ ## name ## _header =            \
  {                                                         \
    &class_ ## metaclass_name ## _header,                   \
    class_ ## name ## _rack,		                    \
  }

#define declare_class(name)                                 \
  extern struct header_struct class_ ## name ## _header;

#define reference_class(name)                               \
  (void *) &class_ ## name ## _header
