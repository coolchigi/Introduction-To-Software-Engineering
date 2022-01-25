#ifndef QUEUE_H
#define QUEUE_H
#include "Student.h"
#include "defs.h"

using namespace std;

class Queue{

  class Node{
  public:
    Student *data;
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
  void peekFirst(Student **loc);
  void popFirst(Student **loc);
  void addLast(Student *loc);
  void print();

};
#endif
