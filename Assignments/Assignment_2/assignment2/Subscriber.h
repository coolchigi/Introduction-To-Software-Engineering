#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H
#include<string>
#include <iostream>

using namespace std;

class Subscriber{
private:
  string name;
  string credit_card;

public:
  Subscriber();
  Subscriber(string name, string credit_card);
  ~Subscriber();
  bool matches(const string& name);
  string getName();
  void print();


};
#endif
