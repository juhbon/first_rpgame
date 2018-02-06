#ifndef PALADIN_H
#define PALADIN_H

#include "Creature.h"
#include <string>
class Paladin : public Creature
{
public:
    Paladin(std::string&, int&, int&, int&, int&, int&);
    ~Paladin();

    void setDamage(const int& weaponDamage = 0);
    void setProtection(const int& armor = 0);
    void setWeaponDamage(const int&);
    void setArmorProtection(const int&, const int&);
    void setHPmax(const int armorHP = 0);
    void setDodge();
    void setCritical();

    void classBonus();
    void update();
};

#endif PALADIN_H