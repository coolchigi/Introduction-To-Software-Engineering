objects = test.cc Location.o StoreLocation.o

all: test
	
test: $(objects)
	g++ -o test $(objects)

StoreLocation.o: StoreLocation.h StoreLocation.cc Location.h
		g++ -c StoreLocation.cc

Location.o: Location.cc Location.h
			g++ -c Location.cc


clean:
				rm -f test *.o
