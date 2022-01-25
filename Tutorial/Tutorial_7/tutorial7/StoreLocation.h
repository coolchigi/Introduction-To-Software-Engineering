#ifndef STORELOCATION_H
#define STORELOCATION_H
#include <iostream>
#include <string>
#include <iomanip>

#include "Location.h"
#include "defs.h"


using namespace std;

class StoreLocation : public Location{
private:
  static const char code;
  static const int capacity;
  static int nextId;

public:
  StoreLocation();
~StoreLocation();
  void setProduct(const string& v );
  int getFreeSpace();
  void print();
   int getCapacity();
   bool add(const string& productName, int& amount);
   bool remove(int amount);
};
#endif
