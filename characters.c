#include "class_character.h"
#include "class_symbol.h"
#include "class_class.h"
#include "integers.h"
#include "symbols.h"

/* We define all ASCII characters at compile time, because characters
   are used to build string that we also need at compile time.
 */

define_character(NUL, 0);
define_character(SOH, 1);
define_character(STX, 2);
define_character(ETX, 3);
define_character(EOT, 4);
define_character(ENQ, 5);
define_character(ACK, 6);
define_character(BEL, 7);
define_character(BS, 8);
define_character(TAB, 9);
define_character(LF, 10);
define_character(VT, 11);
define_character(FF, 12);
define_character(CR, 13);
define_character(SO, 14);
define_character(SI, 15);
define_character(DLE, 16);
define_character(DC1, 17);
define_character(DC2, 18);
define_character(DC3, 19);
define_character(DC4, 20);
define_character(NAK, 21);
define_character(SYN, 22);
define_character(ETB, 23);
define_character(CAN, 24);
define_character(EM, 25);
define_character(SUB, 26);
define_character(ESC, 27);
define_character(FS, 28);
define_character(GS, 29);
define_character(RS, 30);
define_character(US, 31);
