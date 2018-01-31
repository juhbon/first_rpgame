#ifndef WARRIOR_H
#define WARRIOR_H

#include "Person.h"
#include <string>
class Warrior : public Person
{
public:
	Warrior(std::string, int, int, int, int, int);
	void setDamage(int);
	void setProtection(int);
	void setWeaponDamage(int);
	void setArmorProtection(int, int);
	void setHPmax();
	void setDodge();
	void setCritical();
	void classBonus();
	void update();
	~Warrior();
};

#endif WARRIOR_H