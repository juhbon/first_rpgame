// TestApplication.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Warrior.h"
using namespace std;

int main()
{
	string name;
	cout << "Enter your name, hero: ";
	getline(cin, name);
	int tset = 10;
	Person* war = new Warrior(name, tset, tset, tset, tset, tset);
	war->info();
	war->addExp(120);
	war->levelUp();
	war->setArmorProtection(10, 25);
	war->setWeaponDamage(12);
	war->info();
	return 0;
}