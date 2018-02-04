#include "stdafx.h"
#include "Creature.h"
#include <iostream>

Creature::Creature() {}
std::string Creature::getName()					const {	return name;								}
int Creature::getStrenght()						const {	return strenght;							}
int Creature::getDefence()						const {	return defence;								}
int Creature::getEndurance()						const {	return endurance;							}
int Creature::getDexterity()						const {	return dexterity;							}
int Creature::getIntelligence()					const {	return this->intelligence;					}
int Creature::getDamage()							const {	return this->damage;						}
int Creature::getProtection()						const {	return this->protection;					}
int Creature::getHPmax()							const {	return this->HPmax;							}
int Creature::getHP()								const {	return this->HP;							}
int Creature::getDodge()							const {	return this->dodge;							}
int Creature::getCritical()						const {	return this->critical;						}
int Creature::gelLevel()							const {	return this->level;							}
int Creature::getExp()							const {	return this->exp;							}
void Creature::setClass(const std::string& Class)			{	this->classification = Class;				}
void Creature::setName(const std::string& name)			{	this->name = name;							}
void Creature::setStrenght(const int& strenght)			{	this->strenght = strenght;					}
void Creature::setDefence(const int& defence)				{	this->defence = defence;					}
void Creature::setEndurance(const int& endurance)			{	this->endurance = endurance;				}
void Creature::setDexterity(const int& dexterity)			{	this->dexterity = dexterity;				}
void Creature::setIntelligence(const int& intelligence)	{	this->intelligence = intelligence;			}
void Creature::addExp(const int& exp)						{	this->exp += exp;							}
void Creature::info() const
{
    std::cout << "This is a " << name << ", "<<classification<<", with characteristics:";
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
void Creature::levelUp()
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
void Creature::setDamage(const int& damage) {}
void Creature::setProtection(const int& protection) {}
void Creature::setHPmax(const int& hp) {}
void Creature::setDodge(const int& dodge) {}
void Creature::setCritical(const int& critical) {}
void Creature::setHP(const int& HP) {}
void Creature::setWeaponDamage(const int& damage) {}
void Creature::setArmorProtection(const int& defence, const int& addHP) {}
void Creature::update() {}
void Creature::classBonus() {}
Creature::~Creature() {}
