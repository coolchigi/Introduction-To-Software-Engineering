#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

//this is the base class
using namespace std;

class Location{
  //should be protected. gives you direct access w/o getters
protected:
  string id;
  string product;
  int quantity;
  const string NONE = "Empty";

public:
  // Location();
  //~Location();
  Location(char some, int q);
  string getID();
  string getProduct();
  int getQuantity();
  void setQuantity(int q);
  bool isEmpty();
  bool isAvailable();
  void print();
  void setProduct(string p);
  virtual int getCapacity() = 0;
  virtual bool add(const string& productName, int amount) = 0;
  virtual bool remove(int amount) = 0;



};
#endif
