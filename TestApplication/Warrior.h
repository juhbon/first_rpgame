#ifndef WARRIOR_H
#define WARRIOR_H

#include "Creature.h"
#include <string>
class Warrior : public Creature
{
public:
    Warrior(std::string&, int&, int&, int&, int&, int&);
    ~Warrior();

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

#endif WARRIOR_H