// PF-LAB6-A4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 3; i++)
	{
		cout << "WEEKS " << i << endl;
		for (int j = 1; j <= 7; j++)
		{
			cout << "    DAYS-" << j << endl;
		}
	}
}

