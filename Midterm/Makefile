objects = Library.o main.o

a2: $(objects)
	g++ -o a2 $(objects)

main.o: main.cc Library.h Book.h
	g++ -c main.cc

Library.o: Library.h Library.cc Book.h
	g++ -c Library.cc


clean:
		rm -f a2 *.o
