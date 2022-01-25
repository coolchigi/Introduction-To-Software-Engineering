#include<iostream>
#include "battle.h"
#include "Character.h"


int main(){

  string fighterName, orcName;
  int fighterMaxHealth, fighterDamage;
  std::cout<<"Can you please input the name, max health and damage for a fighter character"<<std::endl;
  std::cin>> fighterName >> fighterMaxHealth >> fighterDamage;
  Character fighter(fighterName, fighterMaxHealth, fighterDamage);

  std::cout<<"Can you please input the name, max health and damage for a Orc character"<<std::endl;
  int orcMaxHealth, orcDamage;
  std::cin>> orcName >> orcMaxHealth >> orcDamage;
  Character orc(orcName, orcMaxHealth, orcDamage);
  fighter.print();
  orc.print();

  Gondor::fight(fighter, orc);
  fighter.print();
  orc.print();
  Mordor::fight(fighter, orc);
  fighter.print();
  orc.print();













  return 0;
}
