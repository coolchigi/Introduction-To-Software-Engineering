#include "HeapArrays.h"

HeapArrays::HeapArrays(){
  episode = new Episode[ARR_SIZE];
  episode_ptr = new Episode*[ARR_SIZE];
  // for(int i = 0; i < ARR_SIZE; i++){
  //   episode[i] = NULL;
  // }
  for(int j = 0; j < ARR_SIZE; j++){
    episode_ptr[j] = new Episode();
  }







}

HeapArrays::~HeapArrays(){
  delete [] episode;
  for(int i = 0; i < ARR_SIZE; i++){
    delete episode_ptr[i];
  }

  delete [] episode_ptr;


}

Episode *HeapArrays::getObjectArray(){
  return episode;
}

Episode **HeapArrays::getPointerArray(){
  return episode_ptr;
}
