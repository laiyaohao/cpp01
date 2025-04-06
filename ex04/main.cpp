#include <bits/stdc++.h>

int main(int ac, char **av)
{
  if (ac != 4)
  {
    std::cerr << "halo got more or less than 4 arguments!" << std::endl;
    return (1);
  }
  std::string filename = av[1];
  std::string s1 = av[2];
  std::string s2 = av[3];
  std::string outfile = filename + ".replace";
  
  std::ifstream file(filename.c_str());
  std::ofstream out(outfile.c_str());

  if (!file.is_open())
  {
    std::cerr << "Failed to open file!" << std::endl;
    return (1);
  }
  if (!out.is_open())
  {
    std::cerr << "Failed to open out!" << std::endl;
    return (1);
  }
  std::string line;
  while (std::getline(file, line))
  {
    while (1)
    {
      size_t pos = line.find(s1);
      if (pos == std::string::npos)
        break;
      line.erase(pos, s1.size());
      line.insert(pos, s2);
      pos = pos + s2.size();
    }
    out << line << std::endl;
  }
  return (0);
}