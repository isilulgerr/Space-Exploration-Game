
#include <iostream>
#include "Planet.h"
#include "Spaceship.h"
#include <math.h>

using namespace std;

int main()
{
	Planet *planets = new Planet[9];
	planets[0] = Planet("MERCURY", 5.791e+07, 4879);
	planets[1] = Planet("VENUS", 1.082e+08, 12104);
	planets[2] = Planet("EARTH", 1.496e+08, 12742);
	planets[3] = Planet("MARS", 2.279e+08, 6779);
	planets[4] = Planet("JUPITER", 7.783e+08, 139822);
	planets[5] = Planet("SATURN", 1.42e+09, 116460);
	planets[6] = Planet("URANUS", 2.87e+09, 50724);
	planets[7] = Planet("NEPTUNE", 4.5e+09, 49244);
	planets[8] = Planet("PLUTO", 5.91e+09, 2370);

	cout << "Enter your Spaceship's name: ";
	string spaceshipname;
	cin >> spaceshipname;
	cout << spaceshipname << endl;
	cout << "Enter the initial fuel of your spaceship (in units): ";
	double myfuel;
	cin >> myfuel;
	cout << myfuel << endl;
	cout << "Name: " << spaceshipname << endl;
	cout << "Fuel: " << myfuel << "units" << endl;
	cout << "Current Location: Not Set" << endl;
	Spaceship myspaceship(spaceshipname, myfuel);
	cout << "\n";

	int selected = -1;
	int prevselected = 0;
    int control = 0;
	while(selected != 0){
	
	cout << "-----LIST OF PLANETS-----" << endl;
	for (int i = 0; i < 9; i++) {
		cout << i+1 << ".- " << planets[i].getname() << "-" << "Distance from Sun: " << planets[i].getdistanceFromSun() << "km, Diameter:" << planets[i].getdiameter() << "km" << endl;
	}
	cout << "\n";
	cout << "Select a planet number you want to travel to (1-9) or enter 0 to exit: 1" << endl;
	cout << "\n";
	cin >> selected;
	if (selected == 0) { break; }
	if (control == 0) {
		cout << "Starting at " << planets[selected-1].getname() << endl;
		myspaceship.travel(planets[selected-1], 0.0);
	}
	else {
		cout << "Successfully traveled to " << planets[selected-1].getname() << "!" << endl;
		myspaceship.travel(planets[selected-1], 0.00003);
	}
	control++;
	myspaceship.displayInfo();
	prevselected = selected;
	cout << "\n";
	}

	cout << "ISIL ULGER / 21070001036 " << endl;
}
