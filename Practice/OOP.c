#include<iostream>
#include<string>



class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

using namespace std;

int main(){
  MyClass object1;
  object1.myNum = 12;
  object1.myString = "Hello World";
  cout << object1.myNum << "\n";
  cout << object1.myString;




  return 0;
}
