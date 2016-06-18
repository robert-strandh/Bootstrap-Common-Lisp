#include "header.h"
#include "class_symbol.h"
#include "symbols.h"

/* This definition is obviously wrong.  It is to be considered a
   temporary solution so that we can create an executable, which
   requires all external references to be resolved. */

struct header_struct class_builtin_class_header =
  {
    reference_symbol(NIL),
    reference_symbol(NIL),
  };


