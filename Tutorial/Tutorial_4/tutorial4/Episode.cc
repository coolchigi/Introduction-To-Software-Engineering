#include "Episode.h"

Episode::Episode(){
  //setEpisode("Impaulsive", 200,"Logan George Mike","Content");
  this->podcast = "Impaulsive";
  this->number = 14;
  this->name = "Jeffrey Epstein";
  this->content = "trash";



}

Episode::~Episode(){


}

Episode::Episode(const string& podcast, int number, const string& name,const string& content){
  this->podcast = podcast;
  this->number = number;
  this->name = name;
  this->content = content;
}

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
  cout<<getPodcast()<<" "<<"Episode number :" <<getNumber()<<" Episode name: "<<getName()<<endl;
}

/*void setNumber(int n){
  this->number = n;
}
void setName(string n){
  this->name = n;
}
void setContent(string c){
  this->content = c;
}
void setPodcast(string p){
  this->podcast = p;
}

void Episode::print(){
  cout<<getPodcast()<<getNumber()<<getName()<<endl;
}

void Episode::setEpisode(const string& podcast, int number, const string& name,const string& content){
  setPodcast(podcast);
  setNumber(number);
  setName(name);
  setContent(content);


}*/
