//
//  fixedExample.cpp
//  ch3
//
//  Created on 6/26/17.
//


#include <iostream>
#include <iomanip>
using namespace std;

int fixedExample()
{
    double day1, day2, day3, total;
    
    // Get the sales for each day
    cout << "Enter the sales for day 1: ";
    cin >> day1;
    cout << "Enter the sales for day 2: ";
    cin >> day2;
    cout << "Enter the sales for day 3: ";
    cin >> day3;
    
    //calculate the total sales
    total = day1 + day2 + day3;
    
    // display sales figures
    cout << "\nSales Figures\n";
    cout << "-------------\n";
    cout << setprecision(2) << fixed;;
    cout << "Day 1: " << setw(8) << day1 << "\n";
    cout << "Day 2: " << setw(8) << day2 << "\n";
    cout << "Day 3: " << setw(8) << day3 << "\n";
    cout << "Total: " << setw(8) << total << endl;
    return 0;
}


