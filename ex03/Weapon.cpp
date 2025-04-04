#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string name)
{
  this->name = name;
}

std::string Weapon::getName()
{
  return this->name;
}

void  Weapon::setName(std::string name)
{
  this->name = name;
}

std::string Weapon::getType()
{
  return this->type;
}

void  Weapon::setType(std::string type)
{
  this->type = type;
}
