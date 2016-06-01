#include "class_string.h"
#include "class_symbol.h"
#include "integers.h"
#include "symbols.h"
#include "characters.h"
#include "strings.h"

void *
string_NIL_rack[] =
  {
    reference_symbol(NIL),
    &integer_3_header,
    &character_N_header,
    &character_I_header,
    &character_L_header,
  };

struct header_struct string_NIL_header =
  {
    reference_symbol(NIL),
    string_NIL_rack,
  };

void *
string_T_rack[] =
  {
    reference_symbol(NIL),
    &integer_1_header,
    &character_T_header,
  };

struct header_struct string_T_header =
  {
    reference_symbol(NIL),
    string_T_rack,
  };
