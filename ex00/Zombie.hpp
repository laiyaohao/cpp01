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
    static Zombie  *newZombie(std::string name);
    static void  randomChump(std::string name);
    ~Zombie(void);
};

#endif