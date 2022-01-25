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
  //print podcast first
      std::cout<<"Podcast: "<<podcast<<endl;
      //print episode name and number
      std::cout<<"Episode Name: "<<name<<" , Episode Number: "<<number<<endl;
      //and at last print episode content
      std::cout<<"Episode Content: "<<content<<endl;
}

void Episode::print(){
  cout<<getPodcast()<<" "<<" Episode number :" <<getNumber()<<" Episode name: "<<getName()<<endl;
}
