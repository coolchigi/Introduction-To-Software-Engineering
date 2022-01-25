#include "Client.h"

Client::Client(const string& name){
  this->name = name;
  pod = new PodArray();




}


Client::~Client(){
  delete pod;


}


void Client::download(Network* net, const string& p){
  Podcast *p_ptr{};
  if(net->download(this->name,p,&p_ptr) && (!pod->isFull())){
    pod->addPodcast(p_ptr);
  }else{
    cout << "***AN ERROR OCCURED***"<<endl;
  }

}

bool Client::stream(Network* aNet, const string& podcast, int epi_num){
  Episode *ep{};
  if(aNet->stream(this->name, podcast,epi_num, &ep)){
    ep->play();
  }

return true;
}


void Client::playLocal(const string& podcast, int episode){
  Episode *epi{};
  Podcast *p{};
  if(pod->getPodcast(podcast, &p) && p->getEpisode(episode, &epi)){
    epi->play();
  }else{
    cout << "***AN ERROR OCCURED***"<<endl;
  }
}
