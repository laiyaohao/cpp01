#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <bits/stdc++.h>

class Zombie
{
  private:
    std::string name;

  public:
    Zombie(std::string name);
    void  announce(void);
    ~Zombie(void);
};

Zombie  *newZombie(std::string name);
void  randomChump(std::string name);

#endif