#include <iostream>
#include<string>
#include "Podcast.h"
#include "Episode.h"
#include "defs.h"


using namespace std;
int main(){

  Podcast *p = new Podcast("Peter","Impaulsive");



  string content[5] = {"Bob", "Alice", "Nolan","Garrett", "Maddie"};
  string title[5] = {"Impaulsive", "Bloomberg", "BriteSpots","Noble Serve", "Blueseal"};

  for(int i = 0; i < 5; i++){
    p->addEpisode(content[i], title[i]);

  }
  p->print();
  p->getNumEpisodes();

  delete p;






  return 0;
}
