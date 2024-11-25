// Bai18_TinhSoThoc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double o, tongthoc = 0, tong = 0;
    cout << "Tinh So Thoc\n";
    cout << "Nhap so o: "; cin >> o; cout << endl;


    for (int i = 1; i <= o; i++)
    {
        tongthoc = pow(2, i-1);
        tong += tongthoc;
        cout << "o thu " << i << " : " << tongthoc << endl;

    }

    cout << "Tong cac so thoc: " << tong << endl;

    return 0;
}

