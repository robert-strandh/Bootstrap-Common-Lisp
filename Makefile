CFLAGS=-g -W -Wall

OBJECT=integers.o characters.o main.o

all: $(OBJECT)
	gcc -o bocl $(OBJECT)
