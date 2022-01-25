#ifndef UBERDRIVER_H
#define UBERDRIVER_H
#include<string>
#include<iostream>
#define MAX_CAR 4


using namespace std;

class UberDriver{
private:
  string name;
  string health;
  int numCars;
  Car **car;

public:
  UberDriver();
  UberDriver(UberDriver&uber);
  ~UberDriver();
  UberDriver(string& n, string& h);







};
#endif
