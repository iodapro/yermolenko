
#include "stdafx.h"


#include <iostream>


using namespace std;

struct MyStruct {
	char name[255];
	int mark;
	int status;
};

void print(const MyStruct obj[], int n)
{

	fot(int j = 0; j<n; j++)
		cout << "Name:\t" << obj[j].name << "\t Mark: \t" << obj[j].mark << "\t Status \t" << obj[j].status << endl;
}

/*!
\brief Rezul`tat zalikovoji sesiji

Rezul`tat zdachi studentamy 2 kursu magistrarury zaliku z predmetu "Suchasni hompjuterni tehnologiji u fizytsi jadra"

*/

int main()
{

	const int n = 3;

	MyStruct student[n] = {};

	for (int i = 0; i < n; i++)
	{
		cout << "\n Name:\t";
		cin >> student[i].name;


		cout << "\n Mark:\t";
		cin >> student[i].mark;


		cout << "\n Status:\t";
		cin >> student[i].status;
	}

	return 0;
}
