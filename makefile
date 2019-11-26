ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o args.o
	$(CC) -o program main.o args.o

main.o: main.c args.h
	$(CC) -c main.c
args.o: args.c args.h
	$(CC) -c args.c

run:
	./program

clean:
	rm*.o
	rm*~
