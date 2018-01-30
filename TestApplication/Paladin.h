#ifndef PALADIN_H
#define PALADIN_H

#include "Person.h"
#include <string>
class Paladin : public Person
{
public:
	Paladin(std::string, int, int, int, int, int);
	void setDamage();
	void setProtection();
	void setWeaponDamage(int);
	void setArmorProtection(int, int);
	void setHPmax();
	void setDodge();
	void setCritical();
	void classBonus();
	~Paladin();
};

#endif PALADIN_H