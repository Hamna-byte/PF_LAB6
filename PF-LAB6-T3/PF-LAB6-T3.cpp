// PF-LAB6-T3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int i = 1; 
    while (i <= rows) {
        int j = 1;
        while (j <= i) {
            cout << i << " ";
            j++;
    }
        cout << endl;
        i++;
    }
}
