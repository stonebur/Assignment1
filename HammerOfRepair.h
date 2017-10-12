/*
* File:   HammerOfRepair.h
* Author: Nathan Stoneburner
*/

#include <string>
#include "Weapon.h"

#ifndef HAMMEROFREPAIR_H
#define HAMMEROFREPAIR_H

/**
* Defines the behavior of the hammer of repair (hitpoint = 40, 30% chance to increase armor of opponent by 15)
*/
class HammerOfRepair : public Weapon {
public:

	HammerOfRepair() : Weapon("Hammer of Repair", 40.0) {
	}
	virtual ~HammerOfRepair() {};
	virtual double hit(double armor);

};

#endif 
