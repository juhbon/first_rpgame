#include "stdafx.h"
#include "Person.h"
#include <iostream>

Person::Person() {}
std::string Person::getName()					const {	return name;								}
int Person::getStrenght()						const {	return strenght;							}
int Person::getDefence()						const {	return defence;								}
int Person::getEndurance()						const {	return endurance;							}
int Person::getDexterity()						const {	return dexterity;							}
int Person::getIntelligence()					const {	return this->intelligence;					}
int Person::getDamage()							const {	return this->damage;						}
int Person::getProtection()						const {	return this->protection;					}
int Person::getHPmax()							const {	return this->HPmax;							}
int Person::getHP()								const {	return this->HP;							}
int Person::getDodge()							const {	return this->dodge;							}
int Person::getCritical()						const {	return this->critical;						}
int Person::gelLevel()							const {	return this->level;							}
int Person::getExp()							const {	return this->exp;							}
void Person::setClass(const std::string& Class)			{	this->classification = Class;				}
void Person::setName(const std::string& name)			{	this->name = name;							}
void Person::setStrenght(const int& strenght)			{	this->strenght = strenght;					}
void Person::setDefence(const int& defence)				{	this->defence = defence;					}
void Person::setEndurance(const int& endurance)			{	this->endurance = endurance;				}
void Person::setDexterity(const int& dexterity)			{	this->dexterity = dexterity;				}
void Person::setIntelligence(const int& intelligence)	{	this->intelligence = intelligence;			}
void Person::addExp(const int& exp)						{	this->exp += exp;							}
void Person::info() const
{
	std::cout << "This is a " << this->name << ", "<<classification<<", with characteristics:";
	std::cout << "\nStrenght = " << this->strenght;
	std::cout << "\nDefence = " << this->defence;
	std::cout << "\nEndurance = " << this->endurance;
	std::cout << "\nDexterity = " << this->dexterity;
	std::cout << "\nIntelligence = " << this->intelligence;
	std::cout << "\nDamage = " << this->damage;
	std::cout << "\nProtection= " << this->protection;
	std::cout << "\nHP max= " << this->HPmax;
	std::cout << "\nHP current = " << this->HP;
	std::cout << "\nDodge chance = " << this->dodge;
	std::cout << "\nChance of crit hit = " << this->critical;
	std::cout << "\nCurrent level = " << this->level;
	std::cout << "\nCurrent experience = " << this->exp<<std::endl;
}
void Person::levelUp()
{
	if (this->exp >= this->explvl) {
		this->explvl += this->explvl;
		int points = 10;
		while (points > 0) {
			std::cout << "You can add 1 point to any of characteristics:\n";
			std::cout << "Strength - print 1\n";
			std::cout << "Defence - print 2\n";
			std::cout << "Endurance - print 3\n";
			std::cout << "Dexterity - print 4\n";
			std::cout << "Intelligence - print 5\n";
			int choise;
			std::cin >> choise;
			switch (choise) {
			case 1: 
				this->setStrenght(getStrenght() + 1); 
				points--;
				break;
			case 2: 
				this->setDefence(getDefence() + 1);
				points--;
				break;
			case 3: 
				this->setEndurance(getEndurance() + 1);
				points--;
				break;
			case 4: 
				this->setDexterity(getDexterity() + 1); 
				points--;
				break;
			case 5: 
				this->setIntelligence(getIntelligence() + 1); 
				points--;
				break;
			default: 
				std::cout << "Choose one of the numbers!";
				continue;
			}
		}
		this->level = this->level + 1;
		update();
		info();
	}
}
void Person::setDamage(const int& damage) { this->damage = damage; }
void Person::setProtection(const int& protection) { this->protection = protection; }
void Person::setHPmax(const int& hp) { this->HPmax = hp; }
void Person::setDodge(const int& dodge) { this->dodge = dodge; }
void Person::setCritical(const int& critical) { this->critical = critical; }
void Person::setHP(const int& HP) { this->HP = HP; }
void Person::setWeaponDamage(const int& damage) {}
void Person::setArmorProtection(const int& defence, const int& addHP) {}
void Person::update() {}
void Person::classBonus() {}
Person::~Person() {}
