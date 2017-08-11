//
//  restuarantBill.cpp
//  startingOutWith
//
//  Created on 6/25/17.
//

#include <iostream>
using namespace std;

int restuarantBill ()
{
    double bill = 88.67, tax = .0675 , tip = .2;
    double billtax = bill*(tax+1);
    tip = billtax*.2;
    double total = billtax + tip;
    
    cout << "The meal costs $"
         << bill
         << "\n The tax was "
         << tax*100
         << "%"
         << "\n The tip was "
         << tip
         <<"\n Th total was $"
         << total;
    return 0;
}

// i think this is finally right?
