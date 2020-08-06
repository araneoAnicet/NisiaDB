all:
	g++ *.cpp Arguments/*.cpp -o test

clean:
	rm -rf Arguments/*.o *.o test
