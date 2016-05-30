#ifndef CLASS_STRING_H
#define CLASS_STRING_H

extern struct header_struct class_string_header;

#define reference_string(name)                       \
  (void *) &string_ ## name ## _header

#define declare_string(name)                                  \
  extern struct header_struct string_ ## name ## _header;

#endif
