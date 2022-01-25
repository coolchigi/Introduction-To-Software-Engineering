#ifndef STUDENT_H
#define STUDENT_H
#include<cstring>

using namespace std;


class Student{
private:
  string name;
  string number;


public:
  Student();
  Student(string n1, string num1);
  Student(const Student &student);
  /*This deletes the Student object */
  ~Student();
  void setName(string fname);
  void setNumber(string fnumber);
  string getName();
  string getNumber();
  bool lessThan(Student& s);
  void print();
  //void setStudent(string n, string no);



};
#endif
