#include "Podcast.h"
#include <iostream>

Podcast::Podcast(){
}


Podcast::Podcast(string t, string h){

  this->title = t;
  this->host = h;
  this->numEps = 0;
  episodes = new Episode*[MAX_EPS];
}

Podcast::Podcast(const Podcast& p){
  title = p.title;
  host = p.host;
  numEps = p.numEps;
  // Episode *an_episode;
  episodes = new Episode*[MAX_EPS];
  // for(int i = 0; i < numEps; i++){
  //   an_episode = p.episodes[i];
  //     episodes[i] = new Episode(*an_episode);
  // }
  for (int i =0 ; i < p.numEps; ++i){
		episodes[i] = new Episode(*p.episodes[i]);
	}

  //Episode contains additional heap allocated memory so I'll need to copy that memory as well

}

Podcast::~Podcast(){

    for(int i = 0; i < numEps; i++){
      delete episodes[i];
    }
    delete [] episodes;


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
      *ep = episodes[index];


    return true;
  }
}

int Podcast::getNumEpisodes(){
  return numEps;
}

bool Podcast::lessThan(Podcast &p){
  return this->title < p.title;
}
