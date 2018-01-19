// Project_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter an integer to see primes numbers from to up to the number (max 20): ";
	cin >> n;
	if (n < 2)
		cout << "There are no prime numbers up to " << n << "." << endl;
	else if (n < 3)
		cout << "The prime number up to " << n << " is: 2." << endl;
	else if (n >= 3 && n < 5)
		cout << "The prime numbers up to " << n << " are: 2, 3." << endl;
	else if (n >= 5 && n < 7)
		cout << "The prime numbers up to " << n << " are: 2, 3, 5." << endl;
	else if (n >= 7 && n < 11)
		cout << "The prime numbers up to " << n << " are: 2, 3, 5, 7." << endl;
	else if (n >= 11 && n < 13)
		cout << "The prime numbers up to " << n << " are: 2, 3, 5, 7, 11." << endl;
	else if (n >= 13 && n < 17)
		cout << "The prime numbers up to " << n << " are: 2, 3, 5, 7, 11, 13." << endl;
	else if (n >= 17 && n < 19)
		cout << "The prime numbers up to " << n << " are: 2, 3, 5, 7, 11, 13, 17." << endl;
	else if (n >= 19 && n <= 20)
		cout << "The prime numbers up to " << n << " are: 2, 3, 5, 7, 11, 13, 17, 19." << endl;
	else if (n < 20)
		cout << "That is an invalid input." << endl;
	system("pause");
	return 0;
}

