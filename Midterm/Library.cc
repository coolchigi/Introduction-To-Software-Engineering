#include "Library.h"



Library::Library(const string& name){
  this->name = name;
  books = new Book*[MAX];
  numBooks = 0;
}


Library::Library(const Library& lib){
  this->name = lib.name;
  this->numBooks = lib.numBooks;
  for(int i = 0; i < lib.numBooks; ++i){
    books[i] = new Book(*lib.books[i]);
  }

}

Library::~Library(){
  for(int i = 0; i < numBooks; i++){
    delete books[i];
  }
  delete [] books;
}

void Library::print(){
  for(int i = 0; i < numBooks; i++){
    books[i]->print();
  }
}
