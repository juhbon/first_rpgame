#pragma once
#include "Person.h"
#include <string>
class Warrior : public Person
{
public:
	Warrior(std::string, int, int, int, int, int);
	void setDamage();
	void setProtection();
	void setWeaponDamage(int);
	void setArmorProtection(int, int);
	void setHPmax();
	void setDodge();
	void setCritical();
	void classBonus();
	~Warrior();
};

