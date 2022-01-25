#include "Reservation.h"


#include<string>

Reservation::Reservation(Student* s, Room* r, Date& d){
  student = s;
  room = r;
  date = new Date(d);
}

Reservation::~Reservation(){
  delete date;


}

Student* Reservation::getStudent(){
  return student;


}

Room* Reservation::getRoom(){
  return room;

}

Date* Reservation::getDate(){
  return date;

}
bool Reservation::lessThan(Reservation& res){
  return (this->date < res.date);
}

bool Reservation::overlaps(string r, Date& d){
  if(r == room->getName() && this->date->overlaps(d)){
    return true;
  }else{
    return false;
  }
}

void Reservation::print(){
  //cout<<getStudent()<<" "<<getDate()<<", "<<getRoom()<<endl;
  cout<<"Here are the student details: "<<endl;
  student->print();
  cout<<"Here are the room details: "<<endl;
  room->print();
  cout<<"Here are the date details: "<<endl;
  date->print();

}
