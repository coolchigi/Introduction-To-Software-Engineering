#ifndef RESERVATION_H
#define RESERVATION_H
#include<string>
#include <iostream>
#include "Student.h"
#include "Date.h"
#include "Room.h"

class Reservation{
private:
  Student *student;
  Room *room;
  Date *date;
public:
  Reservation();
  Reservation(Student*, Room*, Date&);
  ~Reservation();

  //getters
  Student* getStudent();
  Date* getDate();
  Room* getRoom();

  //other functions
  bool lessThan(Reservation& res);
  bool overlaps(string r, Date& d);
  void print();

};
#endif
