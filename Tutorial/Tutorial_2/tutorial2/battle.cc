#include<iostream>
#include "battle.h"
#include "Character.h"




void Gondor::fight(Character& fighter, Character&Orc){
  int d1 = fighter.strike() + 1;
  int d2 = Orc.strike() - 1;

  Orc.takeDamage(d1);
  fighter.takeDamage(d2);
  cout<< fighter.getName() << " hits " << Orc.getName() << " for " << d1<<endl;
  cout<< Orc.getName() << " hits " << fighter.getName() << " for " << d2<<endl;

}



void Mordor::fight(Character& fighter, Character&Orc){
  int d1 = Orc.strike() + 1;
  int d2 = fighter.strike() - 1;
  //Orc.strike();
  fighter.takeDamage(d1);
  Orc.takeDamage(d2);
  cout<< fighter.getName() << " hits " << Orc.getName() << " for " << d1<<" damage "<<endl;
  cout<< Orc.getName() << "hits" << fighter.getName() << " for " << d2<<" damage "<<endl;


}
