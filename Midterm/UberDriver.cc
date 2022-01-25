#include "UberDriver.h"

UberDriver::UberDriver(){
  car = new Car*[MAX_CAR];



}
UberDriver::UberDriver(UberDriver& uber){
  name = uber.name;
  health = uber.health;
  for (int i = 0 ; i < uber.numCars; ++i){
		car[i] = new Car(*uber.car[i]);
	}

}
UberDriver::UberDriver(string& n string& h){
  this->name = n;
  this->health = h;
}

UberDriver::~UberDriver(){
  for(int i = 0; i < numCars; i++){
    delete car[i];
  }
  delete [] car;



}
