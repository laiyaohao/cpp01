#include "HumanA.hpp"
#include "Weapon.hpp"

// initializing reference member using constructor's initializer list
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
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
  return this->weapon;
}

void  HumanA::attack()
{
  std::cout << "attack by " << HumanA::getName() << " using " << HumanA::getWeapon().getType() << std::endl;
}
