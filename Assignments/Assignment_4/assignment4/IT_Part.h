
#ifndef IT_PART_H
#define IT_PART_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class IT_Part {
		
	public:
		//constructor
		IT_Part();
		//copy constructor
		IT_Part(IT_Part&);
		
		//destructor
		~IT_Part();
		
		void print();
	
	private:
	
};
#endif