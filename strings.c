#include "class_string.h"
#include "class_symbol.h"
#include "integers.h"
#include "symbols.h"
#include "characters.h"
#include "strings.h"

void *
string_NIL_rack[] =
  {
    (void *) &symbol_nil_header,
    &integer_3_header,
    &character_N_header,
    &character_I_header,
    &character_L_header,
  };
