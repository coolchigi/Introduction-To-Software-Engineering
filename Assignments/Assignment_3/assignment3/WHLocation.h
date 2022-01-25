#ifndef WHLOCATION_H
#define WHLOCATION_H

#include <iostream>
#include <string>
#include <iomanip>

#include "Location.h"
#include "defs.h"

using namespace std;

class WHLocation : public Location{
private:
  static const char code;
  static const int capacity;
  static int nextId;

public:
  WHLocation();
  ~WHLocation();
  int getCapacity();
  bool add(const string& productName, int amount);
  bool remove(int amount);
  void print();





};
#endif
