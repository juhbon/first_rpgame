#include "stdafx.h"
#include <iostream>
#include "Paladin.h"

Paladin::Paladin(std::string name, int strenght, int defence, int endurance, int dexterity, int intelligence)
{
	setClass("paladin");
	classBonus();
	setName(name);
	setStrenght(strenght);
	setDefence(defence);
	setEndurance(endurance);
	setDexterity(dexterity);
	setIntelligence(intelligence);
	setDamage();
	setProtection();
	setHPmax();
	setDodge();
	setCritical();
}

void Paladin::setDamage()
{
	Person::setDamage(int(getStrenght() + getStrenght()*(getDexterity() * 12 / 100)));
}

void Paladin::setProtection()
{
	Person::setProtection(int(getDefence() + getDefence()*(getEndurance() * 12 / 100)));
}

void Paladin::setWeaponDamage(int strenght)
{
	int weaponDamage = int(strenght + strenght * (getIntelligence() * 16 / 100));
	Person::setStrenght(getStrenght() + weaponDamage);
}

void Paladin::setArmorProtection(int defence, int addHP)
{
	int armorProtection = int(defence + defence * (getIntelligence() * 9 / 100));
	Person::setProtection(getProtection() + armorProtection);
	int armorHP = int(addHP + addHP * (getIntelligence() / 1.1 + getDexterity() / 1.3) / 10);
	Person::setHPmax(getHPmax() + armorHP);
}

void Paladin::setHPmax()
{
	Person::setHPmax(getEndurance() * 10);
}

void Paladin::classBonus()
{
	std::cout << "\nWarrior was chosen! +1 to all stats!\n";
	Person::setStrenght(getStrenght() + 1);
	Person::setDefence(getDefence() + 1);
	Person::setEndurance(getEndurance() + 1);
	Person::setDexterity(getDexterity() + 1);
	Person::setIntelligence(getIntelligence() + 1);
}

void Paladin::setDodge()
{
	Person::setDodge(1 + getDexterity());
}

void Paladin::setCritical()
{
	Person::setCritical(int(getIntelligence() / 2.5 + getDexterity() / 2.5));
}

Paladin::~Paladin()
{
}
