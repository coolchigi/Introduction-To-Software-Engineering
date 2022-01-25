#ifndef LIBRARY_H
#define LIBRARY_H
#include<string>
#include <iostream>
#include "Book.h"

using namespace std;

#define MAX 200
class Library{
public:
Library(const string& name);
Library(const Library&);
~Library();
void addBook(const string& name, const string& content){
if (numBooks >= MAX) return;
books[numBooks++] = new Book(name, content);
}
void print();

private:
string name;
Book** books;
int numBooks;
};
#endif
