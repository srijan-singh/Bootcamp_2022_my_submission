<<<<<<< HEAD
CC=gcc
CFLAGS=-I.
=======
CC=g++
DEPS=functions.h
>>>>>>> eabb6dcaa90b0e3b48eb210cdc611d3f1867c447

factorial: hello.o factorial.o main.o
	$(CC) hello.o factorial.o main.o -o factorial

<<<<<<< HEAD
hello.o: hello.cpp functions.h
        (CC) hello.cpp

factorial.o: factorial.cpp functions.h
        g++ factorial.cpp
=======
hello.o: hello.cpp $(DEPS)
	$(CC) hello.cpp

factorial.o: factorial.cpp $(DEPS)
	$(CC) factorial.cpp
>>>>>>> eabb6dcaa90b0e3b48eb210cdc611d3f1867c447

clean:
	rm *.o output
