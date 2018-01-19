// Project_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, d;
	double m = 0.01, a;
	cout << setw(4) << "Day" << right << setw(30) <<"Amount Owed ($)" << endl;
	cout << setw(4) << "___" << right << setw(30) << "______________________" << endl;
	cout << setw(4) << 1 << setprecision(2) << fixed << right << setw(30) << m << endl;
	for (i = 2; i <= 64; i++)
	{
		m = 2*m;
		cout << setw(4) << i << setprecision (2) << fixed << right << setw(30) << m << endl;
		if (m > 999999 && m < 2000000)
		{
			d = i;
			a = m;
		}
		else
		{ }
	}
	cout << "\nPayment will exceed 1 million dollars on the " << d << "th day at $" << a << endl;
	system("pause");
    return 0;
}

