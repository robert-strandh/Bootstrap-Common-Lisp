#include "header.h"

#define X(value) extern struct header_struct integer_ ## value ## _header
X(1);
#include "integer_list.h"
#undef X
