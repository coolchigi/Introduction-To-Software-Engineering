#include "Part.h"

Part::Part(const string& name ) : partName(name), flighthours(0){

}

Part::~Part(){

}

string Part::getName(){
  return this->partName;
}

void Part::addFlightHours(int fh){
  this->flighthours += fh;


}

void Part::install(const Date& date){
  this->installationDate = date;

}


FH_Part::FH_Part(const string& name, int fh) : Part(name), fh_inspect(fh){

}

FH_Part::~FH_Part(){

}

bool FH_Part::inspection(const Date& d){
  return flighthours >= fh_inspect;
}

IT_Part::IT_Part(const string& name, int it) : Part(name), it_inspect(it){

}

IT_Part::~IT_Part(){

}

bool IT_Part::inspection(const Date& d){

  return d - installationDate > it_inspect;

}

FHIT_Part::FHIT_Part(const string& name, int fh, int it) : Part(name), FH_Part(name, fh), IT_Part(name, it){

}

FHIT_Part::~FHIT_Part(){

}

bool FHIT_Part::inspection(const Date& d){
  return FH_Part::inspection(d) || IT_Part::inspection(d);

}
