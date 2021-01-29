hepsi:derle calistir
derle:
	g++ -I./include -c ./src/DoublyLinkedList.cpp -o ./lib/DoublyLinkedList.o
	g++ -I./include -c ./src/Node.cpp -o ./lib/Node.o
	g++ -I./include ./src/Test.cpp -o ./bin/Test ./lib/Node.o ./lib/DoublyLinkedList.o
calistir:
	./bin/Test