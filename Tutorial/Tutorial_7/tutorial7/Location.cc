#include "Location.h"

Location::Location(char some, int q){
  stringstream ss;
  ss << some << q;
  this->id = ss.str();
  this->quantity = 0;
  this->product = NONE;

}

// Location::~Location(){
//
// }

string Location::getID(){
  return id;

}


string Location::getProduct(){
  return product;
}

int Location::getQuantity(){
  return quantity;
}

bool Location::isEmpty(){
  return (quantity == 0);
}
bool Location::isAvailable(){
  return (product == NONE);
}
void Location::setProduct(string p){
  this->product = p;
}
void Location::setQuantity(int q){
  this->quantity = q;
}


void Location::print(){
  cout <<"Location ID: "<< id<<endl;
  cout<<"Product: "<<product<<endl;
  cout<<"Quantity: "<<quantity<<endl;
}
