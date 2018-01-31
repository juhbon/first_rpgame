#include "stdafx.h"
#include <iostream>
#include "Paladin.h"

Paladin::Paladin(std::string& name, int& strenght, int& defence, int& endurance, int& dexterity, int& intelligence)
{
	setClass("Paladin");
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

void Paladin::setDamage(const int& weaponDamage)
{
	Person::setDamage(int(getStrenght() + getStrenght()*(getDexterity() * 12 / 100)) + weaponDamage);
}

void Paladin::setProtection(const int& armor)
{
	Person::setProtection(int(getDefence() + getDefence()*(getEndurance() * 12 / 100)) + armor);
}

void Paladin::setWeaponDamage(const int& damage)
{
	int weaponDamage = int(damage + damage * (getIntelligence() * 16 / 100));
	Person::setDamage(weaponDamage);
}

void Paladin::setArmorProtection(const int& defence, const int& addHP)
{
	int armorProtection = int(defence + defence * (getIntelligence() * 9 / 100));
	Person::setProtection(getProtection() + armorProtection);
	int armorHP = int(addHP + addHP * (getIntelligence() / 1.8 + getDexterity() / 2.4) / 10);
	setHPmax(armorHP);
}

void Paladin::setHPmax(int armorHP)
{
	Person::setHPmax(getEndurance() * 10 + armorHP);
	setHP(getHPmax());
}

void Paladin::classBonus()
{
	std::cout << "\nPaladin was chosen! +1 to all stats!\n";
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
void Paladin::update()
{
	setDamage();
	setProtection();
	setHPmax();
	setDodge();
	setCritical();
	setHPmax();
}
Paladin::~Paladin()
{
}
