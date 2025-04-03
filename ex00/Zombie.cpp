#include "./Zombie.hpp"

Zombie::Zombie()
{
  this->name = "";
  std::cout << "Zombie is created but he/she has no name :(" << std::endl;
}

void  Zombie::setName(std::string name)
{
  this->name = name;
  std::cout << "Now this Zombie has a name of " << this->name << std::endl;
}

Zombie::~Zombie(void)
{
  std::cout << this->name << " is destroyed" << std::endl;
}

void  Zombie::announce(void)
{
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
