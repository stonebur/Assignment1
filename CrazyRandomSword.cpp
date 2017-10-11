/*
* File:   CrazyRandomSword.cpp
* Author: Nathan Stoneburner
*/

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {

	hitPoints = rand() % (100 - 10 + 1) + 10;
	double damage;
	int newArmor = floor(armor);
	double ignore;
	
	ignore = rand() % ((newArmor/2) + 1);
	
	damage = hitPoints - ignore;

	if (damage < 0) {
		return 0;
	}
	return damage;
}
