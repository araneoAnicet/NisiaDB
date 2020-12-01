CC=g++

test.o: test.cpp
	$(CC) test.cpp -c

test: test.o
	$(CC) test.o -o test

clear:
	rm *.o
