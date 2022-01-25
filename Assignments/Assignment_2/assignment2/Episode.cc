#include "Episode.h"
/*This is a source code file that shows the implementation of the methods and functions defined in
the header file*/

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

        std::cout<<"Podcast/Episode Title: "<<podcast<<endl;

        std::cout<<"Episode Name: "<<name<<endl;
        std::cout<<"Episode Number: "<<number<<endl;

        std::cout<<"Episode Content: "<<content<<endl;
}

void Episode::print(){
  cout<<podcast<<" "<<" Episode number :" <<getNumber()<<" Episode name: "<<getName()<<endl;

}
