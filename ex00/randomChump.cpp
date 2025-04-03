#include "./Zombie.hpp"

void  Zombie::randomChump(std::string name)
{
  Zombie randomZombie = Zombie();
  randomZombie.setName(name);
  randomZombie.announce();
}
