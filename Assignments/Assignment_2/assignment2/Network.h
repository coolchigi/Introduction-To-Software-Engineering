#ifndef NETWORK_H
#define NETWORK_H
#include <iostream>
#include "defs.h"
#include "PodArray.h"
#include "Subscriber.h"
#include <string>

using namespace std;

class Network{
private:
  string name;
  PodArray *pod;
  Subscriber *subscriber[MAX_SUBS];
  int numSubs;
  int numPods;
  int numEps;

public:
  Network(const string& name);
  ~Network();
  bool addPodcast(const string& podcast, const string&host);
  bool removePodcast(const string& p);
  bool addEpisode(const string& podcast, const string& title, const string&content);
  bool addSubscriber(const string& name, const string& credit_card);
  bool download(const string &sub, const string& podcast, Podcast **p );
  bool stream(const string &sub, const string& pod, int numEps, Episode **episode);
  bool hasSubscriber(const string &name);
  bool getPodcast(const string& podcast, Podcast** pod);
  bool getSubscriber(const string& subscriber, Subscriber** sub);
  void print();

};

#endif
