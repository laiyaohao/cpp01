#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <bits/stdc++.h>

class Zombie
{
  private:
    std::string name;
    static int nb;
    int index;

  public:
    Zombie();
    void  setName(std::string name);
    void  announce(void);
    static Zombie *zombieHorde(int N, std::string name);
    ~Zombie(void);
};

#endif