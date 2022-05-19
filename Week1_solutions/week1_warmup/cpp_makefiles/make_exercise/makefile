CC=gcc
DEPS=functions.h

factorial: hello.o factorial.o main.o $(DEPS)
	$(CC) hello.o factorial.o main.o -o factorial

clean:
	rm *.o output
