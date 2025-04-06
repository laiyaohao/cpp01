#include "Harl.hpp"

int main(int ac, char **av)
{
  if (ac != 2)
  {
    std::cerr << "halo got more or less than 2 arguments!" << std::endl;
    return (1);
  }
  std::string level = av[1];

  Harl harl;
  harl.complain(level);
  return (0);
}