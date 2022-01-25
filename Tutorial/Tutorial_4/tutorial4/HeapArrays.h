#ifndef HEAPARRAYS_H
#define HEAPARRAYS_H
#include "defs.h"
#include "Episode.h"
#include<string>
#include<iostream>

class HeapArrays{
private:
  Episode* episode;
  Episode **episode_ptr;

public:
  HeapArrays();
  ~HeapArrays();
  Episode* getObjectArray();
  Episode** getPointerArray();





};
#endif
