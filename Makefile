CFLAGS=-g -W -Wall

OBJECT=integers.o characters.o main.o strings.o class_integer.o symbols.o class_character.o class_builtin_class.o

all: $(OBJECT)
	gcc -o bocl $(OBJECT)

clean:
	rm -f bocl $(OBJECT)

strings.o: class_string.h class_symbol.h integers.h symbols.h characters.h strings.h
class_integer.o: class_class.h
symbols.o: symbols.h
class_builtin_class.o: header.h class_symbol.h symbols.h
