#ifndef PALADIN_H
#define PALADIN_H

#include "Person.h"
#include <string>
class Paladin : public Person
{
public:
    Paladin(std::string&, int&, int&, int&, int&, int&);
    void setDamage(const int& weaponDamage = 0);
    void setProtection(const int& armor = 0);
    void setWeaponDamage(const int&);
    void setArmorProtection(const int&, const int&);
    void setHPmax(const int armorHP = 0);
    void setDodge();
    void setCritical();
    void classBonus();
    void update();
    ~Paladin();
};

#endif PALADIN_H