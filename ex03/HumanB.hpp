#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <bits/stdc++.h>
# include "Weapon.hpp"

class HumanB
{
  private:
    std::string name;
    Weapon *weapon;

  public:
    HumanB(std::string name);
    std::string getName();
    void  setName(std::string name);
    Weapon getWeapon();
    void  setWeapon(Weapon &weapon);
    void  attack();
};

#endif