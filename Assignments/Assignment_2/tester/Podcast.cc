#include "Podcast.h"
#include <iostream>

// Podcast::Podcast(){
//   episodes = new Episode*[MAX_EPS];
//   numEps = 0;
//
//
// }

Podcast::~Podcast(){

    for(int i = 0; i < numEps; i++){
      delete episodes[i];
    }
    delete [] episodes;

}
Podcast::Podcast(string t, string h){

  
  this->title = t;
  this->host = h;
}

Podcast::Podcast(const Podcast& p){
  title = p.title;
  host = p.host;
  numEps = p.numEps;
  Episode *an_episode;
  episodes = new Episode*[MAX_EPS];
  for(int i = 0; i < numEps; i++){
    an_episode = p.episodes[i];
      episodes[i] = new Episode(*an_episode);
  }

  //Episode contains additional heap allocated memory so I'll need to copy that memory as well

}


string Podcast::getTitle(){
  return title;
}

string Podcast::getHost(){
  return host;
}

bool Podcast::addEpisode(string title, string content){
  if(numEps >= MAX_EPS){
    return false;
  }else{
    //add from the back
    episodes[numEps++] = new Episode(this->title, numEps+1, title, content);
  return true;

}

}

void Podcast::print(){
  cout<<"Contents of the array: "<<endl;
  for(int i = 0; i < numEps; i++){
    episodes[i]->print();
  }
  cout << endl;

}

bool Podcast::getEpisode(int index, Episode** ep){
  if(index >= MAX_EPS){ //check if the index is greater than the array capacity
    return false;
  }else{
    // for(int i = 0; i <= index; i++){
    //   *ep = episodes[i];
    // }
      *ep = episodes[index];


    return true;
  }
}

int Podcast::getNumEpisodes(){
  return numEps;
}
