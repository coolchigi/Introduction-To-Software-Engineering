#ifndef PART_H
#define PART_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"

using namespace std;

class Part {
protected:
	string partName; //name and unique identifier of the Part
	Date installationDate; //the date the part was installed on the aircraft
	int flighthours;

	public:
		//constructor
		//pass by const reference to avoid copying
		//mark a function as const when you know the functions
		//wont cause changes to the existing class
		Part(const string& name); //one argument constructor that takes a string and uses it to initialize the name member variable.

		//destructor
		~Part();

		//other

		void addFlightHours(int fh);
		void install(const Date&);

		//virtual functions
		virtual bool inspection(const Date& d) = 0;
		//the overloaded operator must be declared as a friend to access the private
		//members within this class
		//friend ostream &operator<<(ostream &s, Part &part );

		//getters
		string getName();
		Date getDate();
		int getFlightHours();



};

class FH_Part : virtual public Part{
public:
  //constructor
  FH_Part(const string& name, int fh);
  //destructor
  ~FH_Part();
  bool inspection(const Date& d);



protected:
  //string name;
  int fh_inspect; //the number of ight hours until inspection is required.


};

class IT_Part :  virtual public Part{
public:
  IT_Part(const string& name, int it);
  ~IT_Part();
  bool inspection(const Date& d);

protected:
  //string name;
  int it_inspect; //the number of days installed ("install time") until inspection is required.



};


class FHIT_Part : public FH_Part, public IT_Part{

public:
	/*fh means the hours till inspection
	it means the number of days installed ("install time")
	 until inspection is required. */
  FHIT_Part(const string& name, int fh, int it);
	~FHIT_Part();
	bool inspection(const Date& d);


};



#endif
