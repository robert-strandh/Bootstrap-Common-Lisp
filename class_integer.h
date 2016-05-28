#include "header.h"

extern struct header_struct class_integer_header;

#define define_integer(value)                        \
                                                     \
void *                                               \
integer_ ## value ## _rack[] =                       \
  {                                                  \
    (void *) &symbol_nil_header,                     \
    (void *) &integer_1_header,                      \
    (void *) value,                                  \
  };                                                 \
                                                     \
struct header_struct integer_ ## value ## _header =  \
  {                                                  \
    &class_integer_header,                           \
    integer_ ## value ## _rack,		             \
  }

#define reference_integer(value)                     \
  (void *) &integer_ ## value ## _header
