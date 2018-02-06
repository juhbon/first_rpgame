#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include "IItem.h"

class Weapon : public IItem
{
protected:
	int damage;
	bool onehanded;
public:
	Weapon(const std::string& name, const  int& cost, 
           const  int& condition, const  int& damage, 
           const  bool& onehanded);

	int     getDamage()     const;
	bool    getOnehanded()  const;
	void    setDamage(const int& damage);
	void    setOnehanded(const bool& onehanded);
	virtual ~Weapon();
};

#endif WEAPON_H