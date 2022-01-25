
#include "Library.h"
Library::Library(){
  stud = new Student*[MAX_SIZE];
  aRoom = new Room*[MAX_SIZE];
  reservations = new Reservation*[MAX_SIZE];
  noOfStudent = 0;
  noOfRooms = 0;
  noOfReservations = 0;
  for(int j = 0; j < MAX_SIZE; j++){
    stud[j] = NULL;
  }
  for(int i = 0; i < MAX_SIZE; i++){
    aRoom[i] = NULL;
  }
  for(int l = 0; l < MAX_SIZE; l++){
   reservations[l] = NULL;
  }
  string name = "Unknown";
}

Library::~Library(){

  for(int i = 0; i < MAX_SIZE; i++){
    delete stud[i];
  }
  for(int i = 0; i < MAX_SIZE; i++){
    delete reservations[i];
  }
  for(int i = 0; i < MAX_SIZE; i++){
    delete aRoom[i];
  }
  delete[] stud;
  delete[] reservations;
  delete[] aRoom;

}

bool Library::addStudent(const string& name, const string&number){
  //if the number of student is greater than the array size, return false;
  bool result = false;
  if(noOfStudent < MAX_SIZE){
      stud[noOfStudent++] = new Student(name, number);
      result = true;
  }
  return result;

}

bool Library::addRoom(const string& name, int capacity, int computers, bool whiteboard){
  if(noOfRooms < MAX_SIZE){
      aRoom[noOfRooms++] = new Room(name, capacity, computers, whiteboard);
    return true;
  }
  return false;

  }

  bool Library::getStudent(const string& name, Student** student){
  for(int i = 0; i < noOfStudent; i++){
    if(stud[i]->getName() == name){
      *student = stud[i];
      return true;
    }
  }
  return false;
  }

  bool Library::getRoom(const string& roomName, Room** room){
    for(int i = 0; i < noOfRooms; i++){
      if(aRoom[i]->getName() == name){
        *room = aRoom[i];
        return true;
      }
    }
    return false;
  }

  bool Library::isFree(const string& room, Date& d){
    for(int i = 0; i < noOfRooms; i++){
      if(aRoom[i]->getName() == room) {
        return true;
      }
      }
        for(int j = 0; j < noOfReservations; j++){
          if(!reservations[j]->overlaps(room,d)){
            return true;
          }
        }
        return false;
  }



bool Library::makeReservation(const string& student, const string& room, Date& d1){
    Student* s;
    Room* r;
    if(getStudent(student,&s) && getRoom(room,&r) == false){
      return false;
    }
    if(isFree(room,d1)){
      for(int i = 0; i < noOfReservations; i++){
        if(reservations[i] == NULL){
          reservations[i] = new Reservation(s,r,d1);
          return true;
        }

      }


    }
    return false;

  }

  void Library::printReservations(){
    std::cout<<"I am here!"<<std::endl;
    for(int i = 0; i < noOfReservations; i++){
      reservations[i]->print();
    }
  }

  void Library::update(Date& d){
    for(int i =0; i < noOfReservations; i++){
      if(reservations[i]->getDate()->overlaps(d)){
        reservations[i] == NULL;
      }
    }

  }
