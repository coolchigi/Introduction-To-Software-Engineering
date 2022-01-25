#include<iostream>
#include<string>
#include "power.cc"

using namespace std;

int main(){
  int num1, num2, result;
  cout<< "Please enter two integers: ";
  cin >> num1 >> num2;
  power(num1, num2, result);
  cout << num1 << " to the power " << num2 << " is " << result << "!"<<endl;

	return 0;
}
