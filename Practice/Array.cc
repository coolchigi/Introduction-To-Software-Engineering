#include <iostream>
using namespace std;

#include "Array.h"

Array::Array()
{
  size = 0;
}

Array::~Array()
{
  for (int i=0; i<size; ++i)
    delete elements[i];
}

void Array::add(Student* d)
{
  if (size >= MAX_ARR)
    return;

  //start from the far end of the array
  int index = 0;
  for (int i = size; i > 0; --i){
    index = i-1;
    if (d->lessThan(*elements[i-1])){
      elements[i] = elements[i-1];
    }else{
      index = i;
      break;
    }
  }

  elements[index] = d;
  ++size;
}

void Array::getStudent(string name, Student** stu){
    for (int i = 0; i < size; ++i){
        if (name == elements[i]->getName()){
          *stu = elements[i];
          return;
        }
    }
}

void Array::print()
{
  cout << endl << endl << "Students:" << endl;
  for (int i=0; i<size; ++i)
    elements[i]->print();

  cout << endl;
}
