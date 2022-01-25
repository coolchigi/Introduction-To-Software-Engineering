
#ifndef FH_PART_H
#define FH_PART_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class FH_Part : public Part{

	public:
		//constructor
		FH_Part(string name, int fh);
		//destructor
		~FH_Part();
		bool inspection();



	private:
		string name;
		int fh_inspect; //the number of ight hours until inspection is required.

};
#endif
