#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Student {

	public:
		//constructor
		Student(string name = "unknown", string num = "-1");
		//copy constructor
		Student(Student&);

		string getName(){return name;}
		bool lessThan(Student&);
		void print();

	private:
		string name;
		string number;

};
#endif
