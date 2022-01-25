objects = main.o Student.o Date.o Room.o Reservation.o Library.o

a1: $(objects)
		g++ -o a1 $(objects)

main.o: main.cc Student.h Date.h Room.h Reservation.h a1-global.cc
		g++ -c main.cc

Library.o: Library.h Reservation.h Room.h Date.h Student.h Library.cc
			g++ -c Library.cc

Reservation.o: Room.h Date.h Student.h Reservation.cc Reservation.h
			g++ -c Reservation.cc

Student.o:	Student.cc Student.h
		g++ -c Student.cc

Date.o: Date.cc Date.h
		g++ -c Date.cc

Room.o: Room.cc Room.h
		g++ -c Room.cc

clean:
		rm -f *.o p1
