#include "WHLocation.h"
#include "Location.h"

/*Question about
  product class
  Store
  List
  whLocation and storeLocation*/


int WHLocation::nextId = 1;
const int WHLocation::capacity = WHLOC_CAPACITY;
const char WHLocation::code = 'B';

WHLocation::WHLocation() : Location(code, ++nextId){
}

WHLocation::~WHLocation(){


}

int WHLocation::getCapacity(){
  return this->capacity;
}

bool WHLocation::add(const string& productName, int amount){
  if(isAvailable() && this->capacity >= amount){
    product = productName;
    quantity = amount;
    return true;
  }
  return false;

}

bool WHLocation::remove(int amount){
  if(quantity >= amount){
    quantity -= amount;
    if(quantity <= 0){
      product = NONE;
    }
  }
  return true;


}

void WHLocation::print(){
  Location::print();
  cout << endl;
  cout<<"WH Capacity: "<<capacity<<endl;
  //cout<<"WH Location nextId: "<<nextId<<endl;
}
