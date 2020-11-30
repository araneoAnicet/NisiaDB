all: NisiaDB

test: *.o
	g++ *.o -o test

test.o: test.cpp
	g++ -c test.cpp

NisiaDB: *.o
	g++ *.o -o NisiaDB

Collectable.o: Collectable.cpp
	g++ -c Collectable.cpp

CollectableNode.o: CollectableNode.cpp
	g++ -c CollectableNode.cpp

Container.o: Container.cpp
	g++ -c Container.cpp

GarbageCollector.o: GarbageCollector.cpp
	g++ -c GarbageCollector.cpp

Initializer.o: Initializer.cpp
	g++ -c Initializer.cpp

LinkedList.o: LinkedList.cpp
	g++ -c LinkedList.cpp

Table.o: Table.cpp
	g++ -c Table.cpp
	
Selector.o: Selector.cpp
	g++ -c Selector.cpp
	
Identity.o: Identity.cpp
	g++ -c Indentity.cpp
	
Finder.o: Finder.cpp
	g++ -c Finder.cpp
	
EntityContainer.o: EntityContainer.cpp
	g++ -c EntityContainer.cpp
	
Entity.o: Entity.cpp
	g++ -c Entity.cpp
	
EntitiesContainer.o: EntitiesContainer.cpp
	g++ -c EntitiesContainer.cpp
	
Database.o: Database.cpp
	g++ -c Database.cpp

BoolArgument.o: BoolArgument.cpp
	g++ -c Arguments/BooArgument.cpp
	
StringArgument.o: StringArgument.cpp
	g++ -c Arguments/StringArgument
	
NumberArgument.o: NumberArgument.cpp
	g++ -c Arguments/NumberArgument.cpp
	
FloatArgument.o: FloatArgument.cpp
	g++ -c Arguments/FloatArgument.cpp
	
EntityArgument.o: EntityArgument.cpp
	g++ -c Arguments/EntityArgument.cpp
	
Arguments.o: Arguments.cpp
	g++ -c Arguments/Arguments.cpp
	
Argument.o: Argument.cpp
	g++ -c Arguments/Argument.cpp
	
clean:
	rm -rf *.o NisiaDB
