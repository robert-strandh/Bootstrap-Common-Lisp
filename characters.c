#include "class_character.h"
#include "class_symbol.h"
#include "class_class.h"
#include "integers.h"
#include "symbols.h"

/* We define all ASCII characters at compile time, because characters
   are used to build string that we also need at compile time.
 */

define_character(null, 0);
