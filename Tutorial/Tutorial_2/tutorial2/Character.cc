#include<iostream>
#include<string>
#include "Character.h"

Character::Character(string& a, int maxHealth, int damage){
  this->name = a;
  this->maxHealth = maxHealth;
  this->damage = damage;
  this->currentHealth = maxHealth;

}

Character::Character(Character& c){

}

Character::~Character(){

}

string Character::getName(){
  return name;
}

void Character::takeDamage(int damage){
  if(currentHealth > 0){
    currentHealth -= damage;
  }
  else if(currentHealth < 0){
    currentHealth += 0;
  }


}

int Character::strike(){
  return this->damage;
}

void Character::print(){
  cout << this->name << " " << this->currentHealth<<endl;
}
