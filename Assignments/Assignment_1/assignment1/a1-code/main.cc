#include<iostream>
#include "Date.h"
#include "Student.h"
#include "Room.h"
#include "Reservation.h"
#include "Library.h"
#include "a1-global.cc"


bool lessThan(string &x, string &y);
int main(){

  /*Student stud1;
  Student stud2;
  stud1.setName("John");
  stud1.setNumber("Google");
  stud2.setNumber("Bava");
  std::cout << stud1.getName()<<std::endl;
  std::cout << stud1.getName()<<std::endl;

  //Testing to see if lessThan works
  bool result = stud1.lessThan(stud2);
  std::cout<<"Value of result"<<std::endl;
    std::cout<<result<<std::endl;
    stud1.print();



  string firstString = "Python";
  string firstString1 = "Dasani";
  string secondString = "Java";
  string secondString1 = "Java";
  bool answer = lessThan(firstString, secondString);
  bool answer1 = lessThan(firstString1, secondString1);
  std::cout<<"Other print statements"<<std::endl;
  std::cout<<answer<<std::endl;
  std::cout<<answer1<<std::endl;

  int year,  month, day,  hour,  duration;
  std::cout<<"Enter the year, month, day, hour, duration"<<std::endl;
  std::cin>>year>>month>>day>>hour>>duration;
  Date date(year, month, day, hour, duration);

  int year1,  month1, day1,  hour1,  duration1;
  std::cout<<"Enter the year, month, day, hour, duration"<<std::endl;;
  std::cin>>year1>>month1>>day1>>hour1>>duration1;
  Date date1(year1, month1, day1, hour1, duration1);

  cout<<date.lessThan(date1)<<std::endl; */
  Date d1(2020,1,24,11,3);
  Date d2(2020,1,23,11,3);
  testDate(d1,d2,false);
  Date d4(2020,10,24,11,1);
  Date d5(2020,10,24,12,3);
  testDate(d4,d5,false);
  Date d6(2020,10,24,11,3);
  Date d7(2020,10,24,13,2);
  testDate(d6,d7,true);
  Date d8(2020,1,24,11,3);
  Date d9(2020,1,24,11,3);
  testDate(d8,d9,true);
  Date d10(2020,10,24,11,3);
  Date d11(2020,10,24,15,1);
  testDate(d10,d11,false);

  Library aLibrary;
  populate(aLibrary);
  testReservations(aLibrary);

  std::cout<<"Just testing print method in other classes :"<<std::endl;
  Student stud("Micah","101");
  stud.print();
  Room room("Rectangle",45,12,false);
  room.print();
  Date date(2021,12,5,11,2);
  date.print();
  Reservation reserve(&stud, &room, date);
  reserve.print();











  return 0;
}

bool lessThan(string &x, string &y){
  return x < y ? true : false;

}
