CC=g++
DEPS=complex.h 

complex: print.o complex.o main.o $(DE)
	$(CC) print.cpp complex.cpp main.cpp -o complex

clean:
	rm *.o output