#include "./Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
  int i;
  Zombie *horde = new Zombie[N];

  i = 0;
  while (i < N)
  {
    // read more: Placement new
    horde[i].setName(name);
    i++;
  }
  return horde;
}
