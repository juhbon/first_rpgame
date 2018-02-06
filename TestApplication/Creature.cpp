
#include "stdafx.h"
#include "Creature.h"
#include <iostream>

Creature::Creature()    {}
Creature::~Creature()   {}


std::string Creature::getName() const { return name;         }
int Creature::getStrenght()     const { return strenght;     }
int Creature::getDefence()      const { return defence;      }
int Creature::getEndurance()    const { return endurance;    }
int Creature::getDexterity()    const { return dexterity;    }
int Creature::getHPmax()        const { return HPmax;        }
int Creature::getHP()           const { return HP;           }
int Creature::getDodge()        const { return dodge;        }
int Creature::gelLevel()        const { return level;        }
int Creature::getExp()          const { return exp;          }
int Creature::getIntelligence() const { return intelligence; }
int Creature::getDamage()       const { return damage;       }
int Creature::getProtection()   const { return protection;   }
int Creature::getCritical()     const { return critical;     }


void Creature::setClass(const std::string& Class)       { this->classification = Class;      }
void Creature::setName(const std::string& name)         { this->name = name;                 }
void Creature::setStrenght(const int& strenght)         { this->strenght = strenght;         }
void Creature::setDefence(const int& defence)           { this->defence = defence;           }
void Creature::setEndurance(const int& endurance)       { this->endurance = endurance;       }
void Creature::setDexterity(const int& dexterity)       { this->dexterity = dexterity;       }
void Creature::addExp(const int& exp)                   { this->exp += exp;                  }
void Creature::setIntelligence(const int& intelligence) { this->intelligence = intelligence; }
void Creature::setDamage(const int& damage)             { this->damage = damage;             }
void Creature::setProtection(const int& protection)     { this->protection = protection;     }
void Creature::setHPmax(const int& hp)                  { this->HPmax = hp;                  }
void Creature::setDodge(const int& dodge)               { this->dodge = dodge;               }
void Creature::setCritical(const int& critical)         { this->critical = critical;         }
void Creature::setHP(const int& HP)                     { this->HP = HP;                     }
void Creature::setWeaponDamage(const int& damage)       { this->damage = damage;             }
void Creature::setArmorProtection(const int& defence, const int& addHP) {}

void Creature::update()     {}
void Creature::classBonus() {}


void Creature::info() const {
    std::cout << "This is a "           << name << ", "
                                        << classification<< ", with characteristics:";
    std::cout << "\nStrenght = "        << strenght;
    std::cout << "\nDefence = "         << defence;
    std::cout << "\nEndurance = "       << endurance;
    std::cout << "\nDexterity = "       << dexterity;
    std::cout << "\nIntelligence = "    << intelligence;
    std::cout << "\nDamage = "          << damage;
    std::cout << "\nProtection= "       << protection;
    std::cout << "\nHP max= "           << HPmax;
    std::cout << "\nHP current = "      << HP;
    std::cout << "\nDodge chance = "    << dodge;
    std::cout << "\nChance of crit hit = "  << critical;
    std::cout << "\nCurrent level = "       << level;
    std::cout << "\nCurrent experience = "  << exp << std::endl;
}

void Creature::levelUp() {

    if (exp >= explvl) {

        explvl += explvl;

        int points = 10;

        while (points > 0) {

            std::cout << "You can add 1 point to any of characteristics:\n";
            std::cout << "Strength  - print 1\n";
            std::cout << "Defence   - print 2\n";
            std::cout << "Endurance - print 3\n";
            std::cout << "Dexterity - print 4\n";
            std::cout << "Intelligence - print 5\n";

            int choise;
            std::cin >> choise;

            switch (choise) {
                case 1 : strenght++;     points--; break;
                case 2 : defence++;      points--; break;
                case 3 : endurance++;    points--; break;
                case 4 : dexterity++;    points--; break;
                case 5 : intelligence++; points--; break;
                default: std::cout << "Choose one of the numbers!";
            }
        }

        level++;
        update();
        info();
    }
}
