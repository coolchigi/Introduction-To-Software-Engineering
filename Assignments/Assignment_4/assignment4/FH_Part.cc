
#include "FH_Part.h"

FH_Part::FH_Part(string name, int fh) : Part(name), fh_inspect(fh){


}




FH_Part::~FH_Part(){


}

void FH_Part::print(){

}

bool FH_Part::inspection(){
  if(getFlightHours() >= this->fh_inspect){
    return true;
  }else{
    return false;
  }
}
