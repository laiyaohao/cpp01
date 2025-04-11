#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon &weapon)
{
  this->name = name;
  this->weapon = &weapon;
}

std::string HumanA::getName()
{
  return this->name;
}

void  HumanA::setName(std::string name)
{
  this->name = name;
}

Weapon  HumanA::getWeapon()
{
  return *this->weapon;
}

// void  HumanA::setWeapon(Weapon weapon)
// {
//   this->weapon = weapon;
// }

void  HumanA::attack()
{
  std::cout << "attack by " << HumanA::getName() << " using " << HumanA::getWeapon().getType() << std::endl;
}
