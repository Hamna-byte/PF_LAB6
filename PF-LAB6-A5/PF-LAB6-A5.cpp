// PF-LAB6-A5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int rows=5;
	int seats= 10;
	for (int i = 1; i <= rows; i++)
	{
		cout << "ROW " << i << " ";
		for (int j = 1; j <= seats; j++)
		{
			cout << " SEAT-" << j;
		}
		cout << endl;
	}
	
}
