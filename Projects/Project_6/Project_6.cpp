// Project_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void bubblesort(int[], int[], int);
double average(int[],int);

int main()
{
	cout << "This program will load a list from project6.dat located in the default folder to sort the test scores of students \nand display the average test score." << endl;
	cout << "Warning: This program is only set to load up to 100 student IDs and 100 test scores." << endl;
	system("pause");
	const int numstu = 100;
	int i=0, ii, student[numstu], grade[numstu], avg;
	ifstream inFile;
	ofstream outFile;
	inFile.open("project6.dat");
	if (inFile.fail())
	{
		cout << "\nThe file was not successfully opened" << endl;
		system("pause");
		return 1;
	}
	else
	{
		cout << "\nproject6.dat was successfully opened." << endl;
	}
	while (!inFile.eof())
	{
		inFile >> student[i] >> grade[i];
		++i;
	}
	cout << "\nThe table in project6.dat is as follows:" << endl;
	cout << setw(11) << "Student ID#" << setw(15) << "Test Score" << endl;
	for (ii = 0; ii < i; ii++)
	{
		cout << setw(11) << student[ii] << setw(15) << grade[ii] << endl;
	}
	cout << "\nThe average score for " << i << " students is " << average(grade,i) << "." << endl;
	bubblesort(student, grade, i);
	cout << "\nThe table sorted is as follows:" << endl;
	cout << setw(11) << "Student ID#" << setw(15) << "Test Score" << endl;
	for (ii = 0; ii < i;ii++)
	{
		cout << setw(11) << student[ii] << setw(15) << grade[ii] << endl;
	}
	outFile.open("project6sorted.dat");
	for (ii = 0 ; ii < i ; ii++)
	{
		outFile << student[ii] << "    " << grade[ii] << endl;
	}
	cout << "\nThe sorted list was saved in the default folder as project6sorted.dat" << endl;
	inFile.close();
	outFile.close();
	system("pause");
    return 0;
}

void bubblesort(int x[], int y[], int numstu)
{
	int i, ii, temp;
	for (i = 0; i < numstu-1; i++)
	{
		for (ii = 1; ii < numstu; ii++)
		{
			if (y[ii] < y[ii - 1])
			{
				temp = y[ii - 1];
				y[ii - 1] = y[ii];
				y[ii] = temp;
				temp = x[ii - 1];
				x[ii - 1] = x[ii];
				x[ii] = temp;
			}
		}
	}
}

double average(int z[], int i)
{
	int num;
	double tot,sum = 0;
	for (num = 0; num < i; num++)
	{
		sum = sum+z[num];
	}
	tot = sum/i;
	return tot;
}