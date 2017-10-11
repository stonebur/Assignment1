/*
* File:   CrazyRandomSword.h
* Author: Nathan Stoneburner
*/

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
* Defines the behavior of a crazy random sword (hitpoint = random int between
*       10 and 100, ignore random armor points between 0 and half the target armor)
*/
class CrazyRandomSword : public Weapon {
public:
	
	CrazyRandomSword() : Weapon("Crazy random sword", (rand() % (100 - 10 + 1) + 10)) {
		}

	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor);
	
};

#endif 
