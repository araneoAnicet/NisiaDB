all: NisiaDB

NisiaDB: Argument.o Table.o Selector.o Notifier.o Finder.o EntityContainer.o Entity.o EntitiesContainer.o Database.o CanShow.o Arguments.o BoolArgument.o StringArgument.o NumberArgument.o FloatArgument.o EntityArgument.o
	g++ Argument.o Table.o Selector.o Identity.o Finder.o EntityContainer.o Entity.o EntitiesContainer.o Database.o CanShow.o Arguments.o BoolArgument.o StringArgument.o NumberArgument.o FloatArgument.o EntityArgument.o
Table.o: Table.cpp
	g++ Table.cpp -o output
	
Selector.o: Selector.cpp
	g++ Selector.cpp -o output
	
Identity.o: Identity.cpp
	g++ Indentity.cpp -o output
	
Finder.o: Finder.cpp
	g++ Finder.cpp -o output
	
EntityContainer.o: EntityContainer.cpp
	g++ EntityContainer.cpp -o output
	
Entity.o: Entity.cpp
	g++ Entity.cpp -o output
	
EntitiesContainer.o: EntitiesContainer.cpp
	g++ EntitiesContainer.cpp -o output
	
Database.o: Database.cpp
	g++ Database.cpp -o output
	
CanShow.o: CanShow.cpp
	g++ CanShow.cpp -o output

BoolArgument.o: BoolArgument.cpp
	g++ Arguments/BooArgument.cpp -o output
	
StringArgument.o: StringArgument.cpp
	g++ Arguments/StringArgument -o output
	
NumberArgument.o: NumberArgument.cpp
	g++ Arguments/NumberArgument.cpp -o output
	
FloatArgument.o: FloatArgument.cpp
	g++ Arguments/FloatArgument.cpp -o output
	
EntityArgument.o: EntityArgument.cpp
	g++ Arguments/EntityArgument.cpp -o output
	
Arguments.o: Arguments.cpp
	g++ Arguments/Arguments.cpp -o output
	
Argument.o: Argument.cpp
	g++ Arguments/Argument.cpp -o output
	
clean:
	rm -rf *.o NisiaDB
