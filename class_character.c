#include "class_class.h"

void *
class_character_rack[] =
  {
    reference_symbol(NIL),
  };

struct header_struct class_character_header =
  {
    &class_built_in_class_header,
    class_character_rack,
  };
