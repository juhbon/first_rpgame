
#include "stdafx.h"
#include <iostream>
#include "Paladin.h"

Paladin::Paladin(   std::string& name,  int& strenght,  int& defence, 
                    int& endurance,     int& dexterity, int& intelligence) {
	setClass("Paladin");
	classBonus();
	this->name = name;
	this->strenght = strenght;
	this->defence = defence;
	this->endurance = endurance;
	this->dexterity = dexterity;
	this->intelligence = intelligence;
	setDamage();
	setProtection();
	setHPmax();
	setDodge();
	setCritical();
}

void Paladin::setDamage(const int& weaponDamage) {
	damage = static_cast<int>(strenght + strenght * (dexterity * 12 / 100)) + weaponDamage;
}

void Paladin::setProtection(const int& armor) {
	protection = static_cast<int>(defence + defence * (endurance * 12 / 100)) + armor;
}

void Paladin::setWeaponDamage(const int& weapondmg) {
	int weaponDamage = static_cast<int>(weapondmg + weapondmg * (intelligence * 16 / 100));
	damage += weaponDamage;
}

void Paladin::setArmorProtection(const int& defence, const int& addHP) {
	int armorProtection = static_cast<int>(defence + defence * (intelligence * 9 / 100));
	protection += armorProtection;
	int armorHP = int(addHP + addHP * (intelligence / 1.8 + dexterity / 2.4) / 10);
	setHPmax(armorHP);
}

void Paladin::setHPmax(int armorHP) {
	HPmax = endurance * 10 + armorHP;
	HP = HPmax;
}

void Paladin::classBonus() {
	std::cout << "\nPaladin was chosen! +1 to all stats!\n";

	strenght++;
	defence++;
	endurance++;
	dexterity++;
	intelligence++;
}

void Paladin::setDodge() {
	dodge = 1 + dexterity;
}

void Paladin::setCritical() {
	critical = int(intelligence / 2.5 + dexterity / 2.5);
}

void Paladin::update() {
	setDamage();
	setProtection();
	setHPmax();
	setDodge();
	setCritical();
	setHPmax();
}

Paladin::~Paladin() {

}
