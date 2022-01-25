TARGETS	=	p1

all:	$(TARGETS)

p1:	main.o Student.o Array.o
	g++ -o p1 main.o Student.o Array.o

main.o:	main.cc Student.h Array.h
	g++ -c main.cc

Student.o:	Student.cc Student.h
	g++ -c Student.cc

Array.o:	Array.cc Array.h Student.h
	g++ -c Array.cc

clean:
	rm -f *.o p1
