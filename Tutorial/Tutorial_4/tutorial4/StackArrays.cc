#include "StackArrays.h"

StackArrays::StackArrays(){


  for(int i = 0; i < ARR_SIZE; i++){
    episode_ptr[i] = new Episode();

  }
}

StackArrays::~StackArrays(){
  for(int i = 0; i < ARR_SIZE; i++){
    delete episode_ptr[i];
  }

  //delete episode_ptr[];


}

Episode *StackArrays::getObjectArray(){
  return episode;
}

Episode** StackArrays::getPointerArray(){
  return episode_ptr;
}
