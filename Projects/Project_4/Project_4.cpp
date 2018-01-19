// Project_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int factorial (int n);

int main()
{
	int n, total;
	cout << "Enter an integer greater than or equal to 0 to find it's factorial:"; cin >> n;
	if (n >= 0)
	{
		cout << "The " << n << "! is " << factorial(n) << "." << endl;
	}
	else
		cout << "Please input a number greater than or equal to 0." << endl;
	system("pause");
    return 0;
}

int factorial(int n)
{
	int total;
	if (n > 2)
	{
		total = n;
		while (n > 1)
		{
			total = total * (n - 1);
			n = n - 1;
		}
	}
	else
	{
		if (n > 1)
			total = 2;
		else
			total = 1;
	}
	return total;
}
