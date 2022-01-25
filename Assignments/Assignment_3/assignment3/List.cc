
#include "List.h"
//question about the product class,
//list, member variables of whLocation and storeLocation

List::List() : head(NULL), currentItems(0) {}

List::~List(){
  Node* currNode;
  Node* nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }

}

bool List::isEmpty(){
  return head == NULL;
}

void List::add(Product *p){
  Node* newNode;
  Node* currNode;
  Node* prevNode;

  newNode = new Node;
  newNode->data = p;
  newNode->next = NULL;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (newNode->data->getName() < currNode->data->getName())
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == NULL)
    head = newNode;
  else
    prevNode->next = newNode;

  newNode->next = currNode;


}

void List::findProduct(const string& name, Product** prod){ //looks weird
  Node *currentNode = head; //start from the head of the list
  Node *previousNode = NULL;
  while(currentNode != NULL){
    if(currentNode->data->getName() == name){
      break;
    }
    previousNode = currentNode;
    currentNode = currentNode->next;

      //*prod = currentNode->data->getName();

    // }else{
    //   *prod = NULL;
    // }
    //currentNode = currentNode->next;
  }
  if(currentNode == NULL){
    *prod = NULL;
  }else{
    *prod = currentNode->data;
  }

}

void List::print(){
  Node* currNode = head;

  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }
}
