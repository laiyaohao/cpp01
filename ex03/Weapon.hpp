#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <bits/stdc++.h>

class Weapon
{
  private:
    std::string name;
    std::string type;

  public:
    Weapon();
    Weapon(std::string name);
    std::string getName();
    void  setName(std::string name);
    std::string getType();
    void  setType(std::string type);
};

#endif