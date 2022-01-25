#include <iostream>
#include <string>
using namespace std;

#include "Queue.h"
#include "WHLocation.h"

Queue::Queue(): head(NULL), tail(NULL), currentItems(0){}

Queue::~Queue(){
  Node* currentNode = head;
            for(int i = 0; i < currentItems; i++){
                Node* r = currentNode;
                currentNode = currentNode->next;
                delete r;
            }
  // Node *nextNode = NULL;
  // Node *currentNode = head;
  // //Node *tailNode = tail;
  //
  // while(currentNode != NULL){
  //   nextNode = currentNode;
  //   currentNode = currentNode->next;
  //   delete nextNode;
  //
  // }
  // nextNode = NULL;
  // head = NULL;
  // tail = NULL;
}

void Queue::peekFirst(WHLocation **loc){
  if(isEmpty()){
    *loc = NULL;
    cout<<"Queue is empty"<<endl;
  }else{
    *loc = head->data;
  }



}


void Queue::popFirst(WHLocation **loc){
  if(isEmpty())
  {
    *loc = NULL;
    return;
  }
  Node *currentNode = head->next; /*the current node is what the head is pointing to*/
  Node *deleteNode = head; /*Node that would be deleted*/
  *loc = deleteNode->data;
  delete deleteNode;
  head = currentNode;
  currentItems--;
}







void Queue::addLast(WHLocation *loc){
  Node *newNode = new Node; //create a new node
   newNode->data = loc; //let the data in that node be loc
   newNode->next = NULL;
  if(currentItems == 0){ //nothing has been added so let head and tail point to the new node
    head = tail = newNode;
  }else{
    tail->next = newNode; //let tail pointer point to the new node
    newNode->next = NULL; //new node is the new tail so it's pointer is null
    tail = newNode; //previous tail is the newNode that has been added

  }
 currentItems++;
}



bool Queue::isEmpty(){
  return head == NULL;
}

bool Queue::isFull(){
  return currentItems >= WHLOC_CAPACITY;
}

void Queue::print(){
  Node *aNode = head;
  while (aNode != NULL) {
    aNode->data->print();
    aNode = aNode->next;
  }

}
