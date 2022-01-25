#ifndef PODCAST_H
#define PODCAST_H
#include <iostream>
#include "defs.h"
#include <string>
#include"Episode.h"

using namespace std;

class Podcast{
private:
  string title;
  string host;
  int numEps;
  //Episode* episodes[MAX_EPS]; //dynamically allocated primitive array of Episodes.
  Episode** episodes;

public:
  // Podcast();
  Podcast(string t, string h);
  ~Podcast();
  Podcast(const Podcast &p);
  string getTitle();
  string getHost();
  bool addEpisode(string title, string content);
  void print();
  int getNumEpisodes();
  bool getEpisode(int index, Episode** ep);

};
#endif
