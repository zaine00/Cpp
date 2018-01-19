// Project_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int bubbleSort(int[], int[], int);

int main()
{
	const int studentNUM = 5;
	int i, moves;
	int studentID[studentNUM];
	int score[studentNUM];
	cout << "Please enter test scores for " << studentNUM << " students." << endl;
	for (i = 0; i < studentNUM; i++)
	{
		cout << "Enter the student # ";
		cin >> studentID[i];
		cout << "Enter the test score for student # " << studentID[i] << " ";
		cin >> score[i];
	}

	cout << "\nThe original list was:" << endl;
	cout << "Student:" << setw(12) << "Score:" << endl;
	for (i = 0; i < studentNUM; i++)
	{
		cout << studentID[i] << setw(15) << score[i] << endl;
	}

	cout << "\nThe list sorted by test score is:" << endl;
	cout << "Student:" << setw(12) << "Score:" << endl;
	moves = bubbleSort(studentID, score, studentNUM);
	for (i = 0; i < studentNUM; i++)
	{
		cout << studentID[i] << setw(15) << score[i] << endl;
	}
	cout << endl << moves << " moves were made to sort this list" << endl;
	system("pause");
    return 0;
}

int bubbleSort(int studentID[], int score[], int studentNUM)
{
	int i, ii, temp=0, temp2=0, moves = 0;
	for (i = 0;i < studentNUM - 1; i++)
	{
		for (ii = 1; ii < studentNUM; ii++)
		{
			if (score[ii] < score[ii - 1])
			{
				temp = score[ii];
				score[ii] = score[ii - 1];
				score[ii - 1] = temp;
				temp2 = studentID[ii];
				studentID[ii] = studentID[ii - 1];
				studentID[ii - 1] = temp2;
				moves++;
			}
		}
	}
	return(moves);
}