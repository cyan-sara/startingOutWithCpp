//
//  leftRight.cpp
//  ch3
//
//  Created on 7/7/17.
//
//


#include <iostream>
#include <iomanip>
using namespace std;

int leftRight()
{
    double x = 146.789, y = 24.2 , z = 1.783;
    cout << setw(10) << x << endl; // cout prints these right-justified
    cout << setw(10) << y << endl; // we can tell it to left-justify things
    cout << setw(10) << z << endl;

    cout << left << setw(10) << x << endl; // this causes subsequent lines to be printed left-justified
    cout << setw(10) << y << endl;
    cout << setw(10) << z << endl;

// can you center-justify things?
    // not easily apparently
    // so sad
    return 0;
}
