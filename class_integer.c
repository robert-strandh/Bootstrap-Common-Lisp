#include "class_class.h"

void *
class_integer_rack[] =
  {
    reference_symbol(NIL),
  };

struct header_struct class_integer_header =
  {
    &class_built_in_class_header,
    class_integer_rack,
  };
