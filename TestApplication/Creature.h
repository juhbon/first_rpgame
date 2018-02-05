#ifndef CREATURE_H
#define CREATURE_H

#include <string>

class Creature
{
protected:
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
	Creature();
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
    virtual void setDamage(const int&);
    virtual void setProtection(const int&);
    virtual void setHPmax(const int&);
    virtual void setDodge(const int&);
    virtual void setCritical(const int&);
    virtual void setHP(const int&);
    virtual void setWeaponDamage(const int&);
    virtual void setArmorProtection(const int&, const int&);
    virtual void update();
	virtual void setHPmax(const int armorHP) = 0;
    virtual void classBonus() = 0;
    virtual ~Creature();
};

#endif CREATURE_H