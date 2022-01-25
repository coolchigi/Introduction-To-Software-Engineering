#ifndef LIST_H
#define LIST_H


#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "Product.h"
#include "defs.h"

//this is the base class
using namespace std;


class List{
  class Node
  {
    public:
      Product* data;
      Node*    next;
  };

public:
  List();
  ~List();
  bool isEmpty();
  void add(Product *p);
  void findProduct(const string& name, Product** prod);
  void print();
private:
    Node* head;
    int currentItems;



};
#endif
