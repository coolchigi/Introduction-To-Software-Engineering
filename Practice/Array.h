#ifndef ARRAY_H
#define ARRAY_H

#define MAX_ARR 64

#include "Student.h"

class Array
{
  public:
    Array();
    ~Array();
    void add(Student*);
    void getStudent(string name, Student**);
    void print();

  private:
    Student* elements[MAX_ARR];
    int   size;
};

#endif
