#include <iostream>
#include <string.h>
#include "Planet.h"

using namespace std;

Planet::Planet(string name, double distance, double dm) {
	setname(name);
	setdistanceFromSun(distance);
	setdiameter(dm);
}

double Planet::distanceTo(const Planet& destination) {
	if ((destination.distanceFromSun) > getdistanceFromSun()) {
		return (destination.distanceFromSun) - getdistanceFromSun();
	}
	else return  getdistanceFromSun() - (destination.distanceFromSun);
}

