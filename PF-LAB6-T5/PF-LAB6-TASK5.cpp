// PF-LAB6-TASK5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
    int rows = 5;
    int seats = 10;
    int i = 1;
    while (i <= rows) {
        cout << "ROW " << i << " ";
        int j = 1;
        while (j <= seats) {
            cout << " SEAT-" << j;
            j++;
        }
        cout << endl;
        i++;
    }
}