
#include <iostream>
#include "Library.h"
#include "Book.h"

using namespace std;


int main(){
  Library lib("My Library");
  lib.addBook("Harry Potter", "Romeo and Juliet");
  lib.print();

  return 0;

}
