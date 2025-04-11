#include "Zombie.hpp"

int main(void)
{
  Zombie  *zombie1 = Zombie::newZombie("zombie1");
  Zombie  *zombie2 = Zombie::newZombie("zombie2");
  zombie1->announce();
  zombie2->announce();
  Zombie::randomChump("zombie3");
  delete zombie1;
  delete zombie2;
  return 0;
}
