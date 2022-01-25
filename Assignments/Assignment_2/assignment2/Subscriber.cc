#include "Subscriber.h"

Subscriber::Subscriber(){


  
}
Subscriber::Subscriber(string name, string credit_card){
  this->name = name;
  this->credit_card = credit_card;
}

Subscriber::~Subscriber(){


}

bool Subscriber::matches(const string& name){
  return (this->name == name);
}

string Subscriber::getName(){
  return this->name;
}

void Subscriber::print(){
  cout<<name<<" "<<credit_card<<endl;
}
