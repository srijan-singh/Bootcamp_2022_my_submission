factorial: main.o
	g++ main.o -o factorial

main.o: main.cpp
	g++ main.cpp

main.cpp: factorial.o hello.o
	g++ factorial.cpp hello.cpp 

clean:
	rm *