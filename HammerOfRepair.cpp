/*
* File:   HammerOfRepair.cpp
* Author: Nathan Stoneburner
*/

#include "HammerOfRepair.h"

double HammerOfRepair::hit(double armor) {

	bool proc = false;
	double damage;

	if (rand() % 100 < 30)
		proc = true;

	if (proc == true)
		damage = hitPoints - (armor + 15);
	else
		damage = hitPoints - armor;
	

	if (damage < 0) {
		return 0;
	}
	return damage;
}
