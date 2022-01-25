
#ifndef PART_H
#define PART_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Part {
private:
	string name; //name and unique identifier of the Part
	Date installationDate; //the date the part was installed on the aircraft
	int flighthours;

	public:
		//constructor
		Part(const string& name); //one argument constructor that takes a string and uses it to initialize the name member variable.

		//destructor
		~Part();

		//void print();
		void getName();
		void addFlightHours(int);
		void install(Date&);
		virtual bool inspection(Date d);
		//the overloaded operator must be declared as a friend to access the private
		//members within this class
		friend ostream &operator<<(ostream &s, Part &part );
		string getName();
		Date getDate();
		int getFlightHours();



};


#endif
