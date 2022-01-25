#include "Network.h"
 //A constructor that initializes the member variables
Network::Network(const string& name){
  this->name = name;
  numSubs = 0;
  //numPods = 0;


  for(int i = 0; i < MAX_SUBS; i++){
    subscriber[i] = new Subscriber();
  }
  pod = new PodArray();




}
//A destructor
Network::~Network(){
  for(int i = 0; i < MAX_SUBS; i++){
    delete subscriber[i];
  }
  delete pod;





}

/*This method adds a new podcast object to the PodArray and returns true if successful*/
bool Network::addPodcast(const string& podcast, const string&host){
  Podcast *p = new Podcast(podcast, host);
  pod->addPodcast(p);
  return true;
  delete p;


}
/*This method adds a new podcast episode
If successful, it returns true, else it returns false*/
bool Network::addEpisode(const string& podcast, const string& title, const string&content){
Podcast *p{};
if(pod->getPodcast(podcast, &p)){
  p->addEpisode(title, content);
  return true;
}else{
  return false;
}

}
/*This method adds a new subscriber to the subscriber array*/
bool Network::addSubscriber(const string& name, const string&credit_card){
  if(numSubs >= MAX_SUBS){
    return false;
  }else{
    subscriber[numSubs++] = new Subscriber(name,credit_card);
    return true;
  }

}

bool Network::download(const string &sub, const string& podcast, Podcast **p){
  for(int i = 0; i < numSubs; i++){
    if(subscriber[i]->matches(sub) && pod->getPodcast(podcast, p)){
      return true;
    }
  }
return false;




}

bool Network::stream(const string &sub, const string& pod, int numEps, Episode **episode){
  Podcast *pod_ptr{};

    if(getPodcast(pod, &pod_ptr) && hasSubscriber(sub) && pod_ptr->getEpisode(numEps, episode)){
      return true;

    }else{
      cout<<"No such subscribers, podcast or episode number"<<endl;
      return false;
    }
}

bool Network::hasSubscriber(const string &name){
  for(int i = 0; i < numSubs; i++){
    if(subscriber[i]->matches(name)){
      return true;
    }

  }
  return false;

}

bool Network::getPodcast(const string& podcast, Podcast** podc){
  return pod->getPodcast(podcast, podc);

}

bool Network::getSubscriber(const string& subs, Subscriber** sub){
  for(int i = 0; i < numSubs; i++){
    if(subscriber[i]->matches(subs)){
      *sub = subscriber[i];
      return true;
    }
  }
  return false;

}

bool Network::removePodcast(const string& po){
  Podcast *a_ptr{};
  bool result = false;
  if(pod->removePodcast(po,&a_ptr)){
    result = true;
  }

  return result;


}

void Network::print(){
  cout << "Network Name: "<< name<<endl;

}
