#pragma once // used for including this file to another once
#include <string>

class Person
{
private:
	std::string name;
	std::string classification;
	int strenght,
		defence,
		endurance,
		dexterity,
		intelligence,
		damage,
		protection,
		HPmax,
		HP,
		dodge,
		critical,
		level = 1,
		exp = 0,
		explvl = 100;
public:
	Person();
	std::string getName();
	int getStrenght();
	int getDefence();
	int getEndurance();
	int getDexterity();
	int getIntelligence();
	int getDamage();
	int getProtection();
	int getHPmax();
	int getHP();
	int getDodge();
	int getCritical();
	int gelLevel();
	int getExp();
	void setClass(std::string);
	void setName(std::string);
	void setStrenght(int);
	void setDefence(int);
	void setEndurance(int);
	void setDexterity(int);
	void setIntelligence(int);
	void addExp(int);
	void info();
	void levelUp();
	void setDamage(int);
	void setProtection(int);
	void setHPmax(int);
	void setDodge(int);
	void setCritical(int);
	virtual void classBonus();
	virtual ~Person();
};

