/*
* File:   SimpleAxe.h
* Author: Nathan Stoneburner
*/

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
* Defines the behavior of a simple axe (hitpoint = 60, ignores armor points
*	if armor is greater than 0 and less than 20)
*/
class SimpleAxe : public Weapon {
public:

	SimpleAxe() : Weapon("Simple axe", 60.0) {
	}
	virtual ~SimpleAxe() {};
	virtual double hit(double armor);

};

#endif

