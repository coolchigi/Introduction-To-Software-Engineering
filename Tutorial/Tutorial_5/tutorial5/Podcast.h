#ifndef PODCAST_H
#define PODCAST_H
#include <iostream>
#include "defs.h"
#include <string>
#include "Episode.h"

using namespace std;

class Podcast{
private:
  string title;
  string host;
  int numEps;
  Episode** episodes;   //dynamically allocated primitive array of Episodes.

public:
  Podcast(); //default constructor
  Podcast(string t, string h); //constructor that takes two arguments
  ~Podcast(); //destructor to delete the podcast object
  Podcast(const Podcast &p); //copy constructor
  //getters
  string getTitle();
  string getHost();
  //a method that adds the episode with the title and content
  bool addEpisode(string title, string content);
  //print out the contents of the array
  void print();
  int getNumEpisodes();
  bool getEpisode(int index, Episode** ep);
  bool lessThan(Podcast &p);


};
#endif
