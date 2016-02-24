all:hello
hello: hello.o
	g++ hello.o -o hello.out

hello.o: hello.cpp
	g++ -c hello.cpp

clean:
	rm *.o hello.out
