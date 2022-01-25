#ifndef QUEUE_H
#define QUEUE_H
#include "WHLocation.h"
#include "defs.h"



class Queue{

  class Node{
  public:
    WHLocation *data;
    Node *next;
  };

private:
  Node *head;
  Node *tail;
  int currentItems;

public:
  Queue();
  ~Queue();
  bool isEmpty();
  bool isFull();
  void peekFirst(WHLocation **loc);
  void popFirst(WHLocation **loc);
  void addLast(WHLocation *loc);
  void print();

};
#endif
