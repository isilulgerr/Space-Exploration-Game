#include <iostream>
#include <string.h>
#include "Spaceship.h"

using namespace std;

Spaceship::Spaceship(string name, double fuel){
	setname(name);
	setfuel(fuel);
}

void Spaceship::travel(Planet& destination, double fuelPerDistance) {
	if (currentLocation == NULL) {
		currentLocation = &destination;
	}
	else  {
		if (fuel > (fuelPerDistance * destination.distanceTo(*currentLocation))) {
			this->fuel = this->fuel - (fuelPerDistance * destination.distanceTo(*currentLocation));
			currentLocation = &destination;
		}
		else cout << "not enough fuel" << endl;
	}
}

