  GNU nano 2.9.3                                           makefile                                                     
factorial: hello.o factorial.o main.o
        g++ hello.o factorial.o main.o -o factorial

hello.o: hello.cpp functions.h
        g++ hello.cpp

factorial.o: factorial.cpp functions.h
        g++ factorial.cpp

clean:
        rm *.o output
