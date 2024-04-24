#pragma once
#include <iostream>
#ifndef Planet_h
#define Planet_H
#include <string.h>
using namespace std;

class Planet {
private:
	string name;
	double distanceFromSun;
	double diameter;
public:
	string getname() { return name; }
	double getdistanceFromSun() { return distanceFromSun;}
	double getdiameter() { return diameter; }
	void setname(string name) {
		this->name = name;
	}
	void setdistanceFromSun(double d) {
		distanceFromSun = d;
	}
	void setdiameter(double dm) {
		diameter = dm;
	}
	Planet(string name = "Unknown", double distance = 0, double dm = 0);
	double distanceTo(const Planet& destination);
};
#endif
