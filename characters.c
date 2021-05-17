#include "class_character.h"
#include "class_symbol.h"
#include "class_class.h"
#include "integers.h"
#include "symbols.h"

/* We define all ASCII characters at compile time, because characters
   are used to build string that we also need at compile time.
 */

#define X(name, value) \
static void *character_ ## name ## _rack[] = {                   \
    reference_symbol(NIL),                                       \
    (void *) &integer_1_header,                                  \
    (void *) value,                                              \
};                                                               \
                                                                 \
struct header_struct character_ ## name ## _header = {           \
    &class_character_header,                                     \
    character_ ## name ## _rack,                                 \
}
#include "character_list.h"
#undef X
