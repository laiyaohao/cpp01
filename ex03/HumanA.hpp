#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <bits/stdc++.h>
# include "Weapon.hpp"

class HumanA
{
  private:
    std::string name;
    Weapon *weapon;

  public:
    HumanA(std::string name, Weapon &weapon);
    std::string getName();
    void  setName(std::string name);
    Weapon  getWeapon();
    // void  setWeapon(Weapon weapon);
    void  attack();
};

#endif