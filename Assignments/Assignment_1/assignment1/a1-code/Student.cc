#include<iostream>
#include<string>
#include "Student.h"

Student::Student(string aName, string aNumber){
  name = aName;
  number = aNumber;

}
Student::Student(const Student &student){
  setName(student.name);
  setNumber(student.number);
}

Student::Student(){
  name = "unknown";
  number = "845";
}

Student::~Student(){


}

void Student::setName(string fname){
  this->name = fname;
}

void Student::setNumber(string fnumber){
  this->number = fnumber;
}

string Student::getName(){
  return name;
}

string Student::getNumber(){
  return number;
}

bool Student::lessThan(Student& s){
  if(this->number < s.number){
    return true;
  }else{
    return false;
  }
}

void Student::print(){
  cout<<"Student name: "<<getName() <<" Student number :" <<" "<< getNumber() <<endl;

}
