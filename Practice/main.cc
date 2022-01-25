#include <iostream>
using namespace std;

#include "Array.h"
#include "Student.h"


int main()
{
  Array arr;
  Student* s;

  s = new Student("Zeek","1");

  arr.add(s);

  s = new Student("Cindy","2");
  arr.add(s);

  s = new Student("Bob","3");
  arr.add(s);

  s = new Student("Alice","4");
  arr.add(s);

  s = new Student("Chigozirim","10");
  arr.add(s);

   s = new Student("Zzzzz","5");
  arr.add(s);

  arr.print();

  cout<<"Getting student Cindy..."<<endl;

  arr.getStudent("Cindy", &s);

  cout<<"Printing Cindy: "<<endl;

  s->print();

  return 0;
}
