#ifndef CLIENT_H
#define CLIENT_H
#include<iostream>
#include<string>
#include "Episode.h"
#include "PodArray.h"
#include "Network.h"
#include "Podcast.h"




using namespace std;


class Client{
private:
  string name;
  PodArray* pod;

public:
  Client(const string& name);
  ~Client();
  void download(Network* net, const string& p);
  bool stream(Network* aNet, const string& podcast, int epi_num);
  void playLocal(const string& podcast, int episode);



};
#endif
