#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
  this->name = name;
}

std::string HumanB::getName()
{
  return this->name;
}

void  HumanB::setName(std::string name)
{
  this->name = name;
}

Weapon  HumanB::getWeapon()
{
  return *this->weapon;
}

void  HumanB::setWeapon(Weapon &weapon)
{
  this->weapon = &weapon;
}

void  HumanB::attack()
{
  std::cout << "attack by " << HumanB::getName() << " using " << HumanB::getWeapon().getType() << std::endl;
}