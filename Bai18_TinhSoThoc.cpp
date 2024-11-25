// Bai18_TinhSoThoc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int o;
    double tongthoc = 0;
    cout.imbue(locale("en_US.UTF-8"));
    cout << "Tinh So Thoc\n";
    //cout << "Nhap so o: "; cin >> o; cout;
    /*
    if (o > 64) {
        cout << "Tren ban co chi co 64 o, vui long nhap lai so duoi 64\n";
        system("pause");
        return 0;
        
    }
    */
    do {
        cout << "Nhap so o: "; cin >> o;
    } while (o > 64 || o < 0);
    

    for (int i = 0; i < o; i++)
    {
        tongthoc = tongthoc + pow(2, i);
        cout << "o thu " << i + 1 << " co so thoc la: " << fixed << setprecision(0)  << pow(2,i) << " hat thoc" << endl;

    }

    cout << "Tong cac so thoc: " << fixed << setprecision(0) << tongthoc << endl;

    return 0;
}

