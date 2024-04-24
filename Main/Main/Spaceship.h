
#pragma once
#include <iostream>
#ifndef Spaceship_h
#define Spaceship_H
#include <string.h>
#include "Planet.h"
using namespace std;

class Spaceship :public Planet{
private:
	string name;
	double fuel;
	Planet* currentLocation = NULL;
public:
	string getname() { return name; }
	double getfuel() { return fuel; }
	Planet getcurrentlocation() { return *currentLocation; }
	void setname(string name) {
		this->name = name;
	}
	void setfuel(double fuel) {
		this->fuel = fuel;
	}
	Spaceship(string name, double fuel);
	void travel(Planet& destination, double fuelPerDistance);
	inline void displayInfo() {
		cout << "spaceship's name: " << name << endl;
		cout << "spaceship's fuel: " << fuel << endl;
		cout << "current location: " << (*currentLocation).getname() << endl;

	}
};
#endif
