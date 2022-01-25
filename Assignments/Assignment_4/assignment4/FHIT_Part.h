
#ifndef FHIT_PART_H
#define FHIT_PART_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class FHIT_Part {
		
	public:
		//constructor
		FHIT_Part();
		//copy constructor
		FHIT_Part(FHIT_Part&);
		
		//destructor
		~FHIT_Part();
		
		void print();
	
	private:
	
};
#endif