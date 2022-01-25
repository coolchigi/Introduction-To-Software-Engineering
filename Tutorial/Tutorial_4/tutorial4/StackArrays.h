#ifndef STACKARRAYS_H
#define STACKARRAYS_H
#include<string>
#include<iostream>
#include "Episode.h"
#include "defs.h"

//using namespace std;


class StackArrays{
private:
  Episode episode[ARR_SIZE];
  Episode *episode_ptr[ARR_SIZE];
  int   size;




public:
  Episode* getObjectArray();
  Episode** getPointerArray();
  StackArrays();
  ~StackArrays();














};

#endif
