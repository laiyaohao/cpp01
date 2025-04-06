#include <bits/stdc++.h>

int main(int ac, char **av)
{
  if (ac != 4)
  {
    std::cerr << "halo got more or less than 4 arguments!" << std::endl;
    return (1);
  }
  char *filename = av[1];
  std::string s1 = av[2];
  std::string s2 = av[3];
  

  std::ifstream file(filename);

  if (!file.is_open())
  {
    std::cerr << "Failed to open file!" << std::endl;
    return 1;
  }
  std::string line;
  while (std::getline(file, line))
  {
    std::cout << line << std::endl;
  }

  file.close();  // Close the file (optional, destructor does it automatically)
  return (0);
}