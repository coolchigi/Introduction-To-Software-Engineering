#include<iostream>
#include<string>
#include "Room.h"


Room::Room(){
  
}
Room::Room(string aName, int aCapacity, int sComputers, bool hwhiteBoard){
  this->name = aName;
  this->capacity = aCapacity;
  this->computers = sComputers;
  this->whiteBoard = hwhiteBoard;
}

Room::Room(const Room &r){
  this->name = r.name;
  this->capacity = r.capacity;
  this->computers = r.computers;
  this->whiteBoard = r.whiteBoard;
}

Room::~Room(){
}

void Room::setName(string fname){
  this->name = fname;
}

void Room::setCapacity(int fcapacity){
  this->capacity = fcapacity;
}

void Room::setComputers(int fcomputers){
  this->computers = fcomputers;
}

void Room::setWhiteBoard(bool fwhiteBoard){
  this->whiteBoard = fwhiteBoard;
}

string Room::getName(){
  return this->name;
}
int Room::getCapacity(){
  return this->capacity;
}
int Room::getComputers(){
  return this->computers;
}
bool Room::hasWhiteboard(){
  return this->whiteBoard;
}

bool Room::lessThan(Room& r){
  if(this->name < r.name){
    return true;
  }else{
    return false;
  }
}

void Room::print(){
	cout << getName()<<" "<<getCapacity()<<", "<<getComputers()<<", "<<hasWhiteboard()<<endl;
}

bool Room::meetsCriteria(int capacity, int computers = 0, bool whiteboard = 0){
  if(this->capacity >= capacity && this->computers >= computers && this->whiteBoard >= whiteboard){
    return true;
  }else{
    return false;
  }

}
