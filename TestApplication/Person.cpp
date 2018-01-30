#include "stdafx.h"
#include "Person.h"
#include <iostream>

Person::Person() {}
std::string Person::getName()					{	return name;							}
int Person::getStrenght()						{	return strenght;						}
int Person::getDefence()						{	return defence;						}
int Person::getEndurance()						{	return endurance;						}
int Person::getDexterity()						{	return dexterity;						}
int Person::getIntelligence()					{	return this->intelligence;					}
int Person::getDamage()							{	return this->damage;						}
int Person::getProtection()						{	return this->protection;					}
int Person::getHPmax()							{	return this->HPmax;							}
int Person::getHP()								{	return this->HP;							}
int Person::getDodge()							{	return this->dodge;				}
int Person::getCritical()						{	return this->critical;			}
int Person::gelLevel()							{	return this->level;				}
int Person::getExp()							{	return this->exp;					}
void Person::setClass(std::string Class)		{	this->classification = Class;		}
void Person::setName(std::string name)			{	this->name = name;							}
void Person::setStrenght(int strenght)			{	this->strenght = strenght;		}
void Person::setDefence(int defence)			{	this->defence = defence;			}
void Person::setEndurance(int endurance)		{	this->endurance = endurance;		}
void Person::setDexterity(int dexterity)		{	this->dexterity = dexterity;		}
void Person::setIntelligence(int intelligence)	{	this->intelligence = intelligence;}
void Person::addExp(int exp)					{	this->exp += exp;				}
void Person::info()
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
				this->setStrenght(getDefence() + 1); 
				points--;
				break;
			case 2: 
				this->setDefence(getDefence() + 1);
				points--;
				break;
			case 3: 
				this->endurance = this->endurance + 1;
				points--;
				break;
			case 4: 
				this->dexterity = this->dexterity + 1; 
				points--;
				break;
			case 5: 
				this->intelligence = this->intelligence + 1; 
				points--;
				break;
			default: 
				std::cout << "Choose one of the numbers!";
				continue;
			}
		}
		this->level = this->level + 1;
		info();
	}
}
void Person::setDamage(int damage) { this->damage = damage; }
void Person::setProtection(int protection) { this->protection = protection; }
void Person::setHPmax(int hp) { this->HPmax = hp; }
void Person::setDodge(int dodge) { this->dodge = dodge; }
void Person::setCritical(int critical) { this->critical = critical; }
void Person::classBonus() {}
Person::~Person() {}
