
#include "Part.h"

Part::Part(const string& n){
  this->name = n;


}



Part::~Part(){


}

void Part::addFlightHours(int f){
  this->flighthours += f;


}

void Part::install(Date& date){
  this->installationDate = date;

}

ostream& operator<<(ostream& out, Part& d){
	return out << d.getName()<<" "<<d.getFlightHours()<<", "<<d.getDate()<<endl;
}

string Part::getName(){
  return this->name;
}


int Part::getFlightHours(){
  return this->flighthours;
}

Date Part::getDate(){
  return this->installationDate;
}
