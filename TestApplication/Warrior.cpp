
#include "stdafx.h"
#include <iostream>
#include "Warrior.h"

Warrior::Warrior(   std::string& name,  int& strenght,  int& defence, 
                    int& endurance,     int& dexterity, int& intelligence) {
    setClass("Warrior");
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

void Warrior::setDamage(const int& weaponDamage) {
    damage = int(strenght + strenght * (dexterity* 12 / 100)) + weaponDamage;
}

void Warrior::setProtection(const int& armor) {
    protection = int(defence + defence * (endurance * 12 / 100)) + armor;
}

void Warrior::setWeaponDamage(const int& weapondmg) {
    int weaponDamage = int(weapondmg + weapondmg * (intelligence * 16 / 100));
    damage += weaponDamage;
}

void Warrior::setArmorProtection(const int& defence, const int& addHP) {
    int armorProtection = int(defence + defence * (intelligence * 9 / 100));
    protection += armorProtection;
    int armorHP = int(addHP + addHP * (intelligence / 1.8 + dexterity / 2.4) / 10);
	setHPmax(armorHP);
}

void Warrior::setHPmax(int armorHP) {
    HPmax = endurance * 10 + armorHP;
    HP = HPmax;
}

void Warrior::classBonus() {
    std::cout << "\nWarrior was chosen! +1 to all stats!\n";
    strenght++;
    defence++;
    endurance++;
    dexterity++;
    intelligence++;
}

void Warrior::setDodge() {
    dodge = 1 + dexterity;
}

void Warrior::setCritical() {
    critical = int(intelligence / 2.5 + dexterity / 2.5);
}

void Warrior::update()  {
    setDamage();
    setProtection();
    setHPmax();
    setDodge();
    setCritical();
    setHPmax();
}

Warrior::~Warrior() {

}
