#include "class_integer.h"
#include "class_symbol.h"
#include "class_class.h"
#include "integers.h"
#include "symbols.h"

void *
integer_1_rack[] =
  {
    reference_symbol(NIL),
    reference_integer(1),
    (void *) 1,
  };

struct header_struct integer_1_header =
  {
    reference_class(integer),
    integer_1_rack,
  };

/* We define some integers at compile time, because integers are used
   in the rack of most objects to indicate the number of words the
   object contains.  And, since we want to generate some of these
   other objects at compile time as well, we need these integers for
   that purpose.
 */

#define X(value) \
static void *integer_ ## value ## _rack[] = {                  \
    reference_symbol(NIL),                                     \
    (void *) &integer_1_header,                                \
    (void *) value,                                            \
};                                                             \
                                                               \
struct header_struct integer_ ## value ## _header = {          \
    &class_integer_header,                                     \
    integer_ ## value ## _rack,                                \
}
#include "integer_list.h"
#undef X
