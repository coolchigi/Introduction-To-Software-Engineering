#ifndef BOOK_H
#define BOOK_H

#include<string>
#include <iostream>

using namespace std;

class Book{
public:
Book(const string& n, const string& c){
  name = n;
  content = c;
}
void print(){
    cout<<" Name: "<< name <<" Content: "<< content << endl;
}
private:
string name;
string content;

};

#endif
