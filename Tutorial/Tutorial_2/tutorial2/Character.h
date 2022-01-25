#ifndef CHARACTER_H
#define CHARACTER_H
#include<string>

using namespace std;

class Character{
private:
  string name;
  int maxHealth, currentHealth, damage;

public:
  Character(string& a, int maxHealth, int damage);
  Character(Character&);
  ~Character();
  string getName();
  void takeDamage(int damage);
  //A getter for the damage parameter
  int strike();
  //Print the name and current health of the character to the console.
  void print();









};
#endif
