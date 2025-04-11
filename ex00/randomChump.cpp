#include "./Zombie.hpp"

void  Zombie::randomChump(std::string name)
{
  Zombie randomZombie = Zombie(name);
  randomZombie.announce();
}
