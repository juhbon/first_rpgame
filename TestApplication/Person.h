#ifndef PERSON_H
#define PERSON_H

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
	std::string getName() const;
	int getStrenght() const;
	int getDefence() const;
	int getEndurance() const;
	int getDexterity() const;
	int getIntelligence() const;
	int getDamage() const;
	int getProtection() const;
	int getHPmax() const;
	int getHP() const;
	int getDodge() const;
	int getCritical() const;
	int gelLevel() const;
	int getExp() const;
	void setClass(const std::string&);
	void setName(const std::string&);
	void setStrenght(const int&);
	void setDefence(const int&);
	void setEndurance(const int&);
	void setDexterity(const int&);
	void setIntelligence(const int&);
	void addExp(const int&);
	void info() const;
	void levelUp();
	void setDamage(const int&);
	void setProtection(const int&);
	void setHPmax(const int&);
	void setDodge(const int&);
	void setCritical(const int&);
	void setHP(const int&);
	virtual void setWeaponDamage(const int&);
	virtual void setArmorProtection(const int&, const int&);
	virtual void update();
	virtual void classBonus();
	virtual ~Person();
};

#endif PERSON_H