#ifndef LIBRARY_H
#define LIBRARY_H
#include<string>
#include<iostream>
#define MAX_SIZE 10
#include "Student.h"
#include "Date.h"
#include "Room.h"
#include "Reservation.h"


class Library{
private:
  Student **stud;
  Room **aRoom;
  Reservation **reservations;
  int noOfStudent;
  int noOfRooms;
  int noOfReservations;
  string name;

public:

  Library();
  ~Library();
  Library(string& name);
  bool addStudent(const string& name, const string& number);
  bool addRoom(const string& name = "Unknown", int capacity = 1, int computers = 0, bool whiteboard = 0 );
  bool getStudent(const string& name, Student** student);
  bool getRoom(const string& roomName, Room** room);
  bool isFree(const string& room, Date&);
  bool makeReservation(const string& student, const string& room, Date&);
  void update(Date& d);
  void printReservations();
};
#endif
