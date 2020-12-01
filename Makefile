CC=g++

test.o: test.cpp
	$(CC) test.cpp -c

collectable.o: garbage_collector/include/collectable.cpp
	$(CC) garbage_collector/include/collectable.cpp -c

mark_sweep_garbage_collector.o: garbage_collector/include/mark_sweep_garbage_collector.cpp
	$(CC) garbage_collector/include/mark_sweep_garbage_collector.cpp -c


test: test.o collectable.o mark_sweep_garbage_collector.o
	$(CC) collectable.o mark_sweep_garbage_collector.o test.o -o test
	clear

clear:
	rm *.o
