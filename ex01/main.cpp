#include "Zombie.hpp"

int main(void)
{
  int i;

  Zombie *horde = zombieHorde(9, "zoombie");
  i = 0;
  while (i < 9)
  {
    horde[i].announce();
    i++;
  }
  delete[] horde;
  return 0;
}
