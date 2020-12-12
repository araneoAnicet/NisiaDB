CC=g++

test.o: test.cpp
	$(CC) test.cpp -c

garbage_collector.o: garbage_collector/include/garbage_collector.cpp
	$(CC) -c garbage_collector/include/garbage_collector.cpp

collectable.o: garbage_collector/include/collectable.cpp
	$(CC) -c garbage_collector/include/collectable.cpp

Identity.o: Identity.cpp
	$(CC) -c Identity.cpp

mark_sweep_garbage_collector.o: garbage_collector/include/mark_sweep_garbage_collector.cpp
	$(CC) -c garbage_collector/include/mark_sweep_garbage_collector.cpp


test: test.o collectable.o mark_sweep_garbage_collector.o Identity.o garbage_collector.o
	$(CC) Identity.o garbage_collector.o collectable.o mark_sweep_garbage_collector.o test.o -o test
	clear

clear:
	rm *.o
