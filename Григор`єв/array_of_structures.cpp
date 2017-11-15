#include "stdafx.h"


#include <iostream>


using namespace std;

struct MyStruct {
	char name[255];
	int mark;
	int status;
};

/*!
\brief Output results
\param [in] n
\param [in] obj[]

Outputting our result into the command line (using "cout")

*/
void print(const MyStruct obj[], int n)
{

	fot(int j = 0; j<n; j++)
		cout << "Name:\t" << obj[j].name << "\t Mark: \t" << obj[j].mark << "\t Status \t" << obj[j].status << endl;
} 

/*!
\brief Result of the session
\param [in] n number of students
\param [in] n number of students

The result of the 2nd year undergraduate student's posting from the subject "Modern computer technologies in nuclear physics"

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
