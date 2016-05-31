CFLAGS=-g -W -Wall

OBJECT=integers.o characters.o main.o strings.o class_integer.o symbols.o class_character.o

all: $(OBJECT)
	gcc -o bocl $(OBJECT)

strings.o: class_string.h class_symbol.h integers.h symbols.h characters.h strings.h
class_integer.o: class_class.h
symbols.o: symbols.h
