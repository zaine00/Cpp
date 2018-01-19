// Project 1 Unit Conversion Table

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char ch = 253;
	cout << "Commonly Used Physical Qunatities" << endl
		<< "Quantity		Symbol		International System (SI Units)		U.S. Customary Units" << endl
		<< "Time			t		seconds (s)				seconds (sec)" << endl
		<< "Length			l		meters (m)				feet (ft)" << endl
		<< "Area			A		sq. meters (m" << ch;	cout << ")				sq. feet (ft" << ch;	cout << ")" << endl
		<< "Volume			V		cubic meters (m^3)			cubic feet(ft^3)" << endl
		<< "Mass			m		kilograms (kg)				pounds-mass (lbm)" << endl
		<< "										slug (1 slug = 1 lbf-ft/sec" << ch; cout << ")" << endl
		<< "Force			F		Newton (N)				pounds-force (lbf)" << endl
		<< "Weight			W		Newton (N)				pounds-force (lbf)" << endl
		<< "Density			P		kilgorams/cubic meters (kg/m^3)		pound-mass/cumbic ft (lbm/ft^3)" << endl
		<< "Velocity		v		meters/sec (m/s)			feet/sec(ft/sec)" << endl
		<< "Acceleration		a		meters/sec" << ch;	cout << " (m/s" << ch;	cout << ")			feet/sec" << ch;	cout << " (ft/sec" << ch;	cout << ")" << endl
		<< "Pressure		P		Pascal (Pa)				lbf/ft" << ch;	cout << "" << endl
		<< "Atmospheric pressure	atm		torr (mm mercury [HG])			pounds per square inch (psi)" << endl
		<< "Energy			E		Joule (J)				calorie (cal)" << endl
		<< "					kilowatt-hr (kWh)			British Thermal Unit (BTU)" << endl
		<< "Heat transfer		Q		Joule (J)				British Thermal Unit (BTU)" << endl
		<< "Heat flux		Q		Joules/sec (J/s)			BTU/sec" << endl
		<< "Work			W		Joule (J)				ft-lbf" << endl
		<< "Power			P		Joules/sec (J/s)			ft-lbf/sec" << endl
		<< "					watts (W)				hoursepower (hp)" << endl
		<< "										BTU/hr" << endl
		<< "Temperature		T		Celsius (C) and				Fahrenheit (F) and" << endl
		<< "					Kelvin (K)				Rankin (R)" << endl;
		system("PAUSE");
	return 0;
}