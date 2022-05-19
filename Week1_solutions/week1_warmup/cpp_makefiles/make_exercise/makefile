CC=gcc
CFLAGS=-I.

factorial: hello.o factorial.o main.o
	$(CC) hello.o factorial.o main.o -o factorial

hello.o: hello.cpp functions.h
        (CC) hello.cpp

factorial.o: factorial.cpp functions.h
        g++ factorial.cpp

clean:
	rm *.o output
