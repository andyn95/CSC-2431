CFGLAGS = -std=c++11 -Wall

main:	main.o polynomial.o
	g++ main.o polynomial.o -o poly $(CFLAGS)

main.o:	main.cpp polynomial.h
	g++ -c main.cpp -o main.o $(CFLAGS)

polynomial.o:	polynomial.h polynomial.cpp
	g++ -c polynomial.cpp $(CFLAGS)

test:	test.o polynomial.o
	g++ -c unit-test.cpp -o test.o $(CFLAGS)

clean:
	rm test poly *.o
