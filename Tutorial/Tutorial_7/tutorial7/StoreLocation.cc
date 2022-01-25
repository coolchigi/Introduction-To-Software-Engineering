#include "StoreLocation.h"

int StoreLocation::nextId = 0;
const int StoreLocation::capacity = SLOC_CAPACITY;
const char StoreLocation::code = 'A';

StoreLocation::StoreLocation() : Location(code, ++nextId){




}

StoreLocation::~StoreLocation(){

}


void StoreLocation::setProduct(const string& v){
  product = v;
}

int StoreLocation::getCapacity(){
  return this->capacity;
}

int StoreLocation::getFreeSpace(){
  return capacity - getQuantity();
}

bool StoreLocation::add(const string& productName, int& amount){
  if(isAvailable()){
    product = productName;
  }

  if(productName == getProduct()){
    if(capacity >= amount + quantity){
      setQuantity(getQuantity() + amount);
      return true;

    }//check if the product matches, then add
    //setQuantity(getQuantity() + amount); //change the qty


  // else if(getProduct() == NONE){ //if no product has been added
  //   setQuantity(getQuantity() + amount);

  }
  return false;

}
bool StoreLocation::remove(int amount){
  if(amount > getQuantity()){
    return false;
  }else if(getQuantity() >= amount){
    setQuantity(getQuantity() - amount);

  }
  return true;

}

void StoreLocation::print(){
  Location::print();
  cout<<"Store Location Capacity: "<<capacity<<endl;

}
