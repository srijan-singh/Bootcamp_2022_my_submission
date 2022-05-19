CC=gcc
DEPS=functions.h

factorial: hello.o factorial.o main.o
	$(CC) hello.o factorial.o main.o -o factorial

hello.o: hello.cpp $(DEPS)
        $(CC) hello.cpp

factorial.o: factorial.cpp $(DEPS)
        $(CC) factorial.cpp

clean:
	rm *.o output
