#include "stdafx.h"
#include <iostream>
#include "Warrior.h"


Warrior::Warrior(std::string name, int strenght, int defence, int endurance, int dexterity, int intelligence)
{
	setClass("warrior");
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

void Warrior::setDamage(int weaponDamage)
{
	Person::setDamage(int(getStrenght() + getStrenght()*(getDexterity() * 12 / 100)) + weaponDamage);
}

void Warrior::setProtection(int armor)
{
	Person::setProtection(int(getDefence() + getDefence()*(getEndurance() * 12 / 100)) + armor);
}

void Warrior::setWeaponDamage(int strenght)
{
	int weaponDamage = int(strenght + strenght * (getIntelligence() * 16 / 100));
	Person::setDamage(weaponDamage);
}

void Warrior::setArmorProtection(int defence, int addHP)
{
	int armorProtection = int(defence + defence * (getIntelligence() * 9 / 100));
	Person::setProtection(getProtection() + armorProtection);
	int armorHP = int(addHP + addHP * (getIntelligence() / 1.1 + getDexterity() / 1.3) / 10);
	Person::setHPmax(getHPmax() + armorHP);
}

void Warrior::setHPmax()
{
	Person::setHPmax(getEndurance() * 10);
	setHP(getHPmax());
}

void Warrior::classBonus() 
{
	std::cout << "\nWarrior was chosen! +1 to all stats!\n";
	Person::setStrenght(getStrenght() + 1);
	Person::setDefence(getDefence() + 1);
	Person::setEndurance(getEndurance() + 1);
	Person::setDexterity(getDexterity() + 1);
	Person::setIntelligence(getIntelligence() + 1);
}

void Warrior::setDodge()
{
	Person::setDodge(1 + getDexterity());
}

void Warrior::setCritical()
{
	Person::setCritical(int(getIntelligence() / 2.5 + getDexterity() / 2.5));
}
void Warrior::update() 
{
	setDamage();
	setProtection();
	setHPmax();
	setDodge();
	setCritical();
	setHPmax();
}
Warrior::~Warrior()
{
}
