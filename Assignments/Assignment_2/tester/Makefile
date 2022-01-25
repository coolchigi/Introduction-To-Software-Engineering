objects = main.o  Podcast.o Episode.o

a2: $(objects)
	g++ -o a2 $(objects)

main.o: main.cc Podcast.h Episode.h defs.h
		g++ -c main.cc

Podcast.o: Podcast.cc Podcast.h Episode.h defs.h
	g++ -c Podcast.cc

Episode.o: Episode.cc Episode.h Podcast.h
	g++ -c Episode.cc

clean:
	rm -f a2 *.o
