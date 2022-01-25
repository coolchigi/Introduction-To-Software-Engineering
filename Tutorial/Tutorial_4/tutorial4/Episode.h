#ifndef EPISODE_H
#define EPISODE_H
#include<string>
#include <iostream>

using namespace std;

class Episode{
private:
  string name;
  string content;
  string podcast;
  int number;


public:
  Episode();
  Episode(const string& podcast, int number, const string& name,const string& content);
  ~Episode();

  int getNumber();
  string getName();
  string getContent();
  string getPodcast();

  void play();
  void print();

  void setNumber(int n);
  void setName(string n);
  void setContent(string c);
  void setPodcast(string p);
  void setEpisode(const string& podcast, int number, const string& name,const string& content);











};
#endif
