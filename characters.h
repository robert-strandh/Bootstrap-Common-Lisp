#include "header.h"

#include "class_character.h"

#define X(name, value) extern struct header_struct character_ ## name ## _header
#include "character_list.h"
#undef X
