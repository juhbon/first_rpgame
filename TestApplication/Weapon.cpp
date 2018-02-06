
#include "stdafx.h"
#include "Weapon.h"


Weapon::Weapon( const std::string& name, const  int& cost, 
                const  int& condition, const int& damage, 
                const  bool& onehanded) : damage(damage), onehanded(onehanded) {
	this->name = name;
	this->cost = cost;
	this->condition = condition;
}

int Weapon::getDamage() const {
	return damage;
}

bool Weapon::getOnehanded() const {
	return onehanded;
}

void Weapon::setDamage(const int& damage) {
	this->damage = damage;
}

void Weapon::setOnehanded(const bool& onehanded) {
	this->onehanded = onehanded;
}

Weapon::~Weapon() {

}
