#include "header.h"
#include "integers.h"

extern struct header_struct class_character_header;

#define reference_character(name)                                \
  (void *) &character_ ## name ## _header
