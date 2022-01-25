#include "Episode.h"

Episode::Episode(){
  //Default constructor



}

Episode::~Episode(){

}

Episode::Episode(const string& podcast, int number, const string& name,const string& content){
  //Constructor that takes in 4 arguments and initializes the member variables.
  this->podcast = podcast;
  this->number = number;
  this->name = name;
  this->content = content;
}

//Getters
int Episode::getNumber(){
  return this->number;
}

string Episode::getName(){
  return this->name;
}
string Episode::getContent(){
  return this->content;
}

string Episode::getPodcast(){
  return this->podcast;
}

void Episode::play(){
  print();
  cout<<"Podcast information:"<<getContent()<<endl;
}

void Episode::print(){
  cout<<getPodcast()<<" "<<"Episode number: " <<getNumber()<<" Episode name: "<<getName()<<" Episode content: "<<getContent()<<endl;
}
