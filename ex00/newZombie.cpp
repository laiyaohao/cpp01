#include "./Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
  Zombie *ans = new Zombie();
  ans->setName(name);
  return ans;
}
