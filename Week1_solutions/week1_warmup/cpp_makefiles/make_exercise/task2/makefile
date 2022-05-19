CC=g++
DEPS=complex.h 

complex: print.o add.o main.o $(DE)
	$(CC) print.cpp add.cpp main.cpp -o complex

clean:
	rm *.o output
