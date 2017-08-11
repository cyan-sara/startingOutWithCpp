//
//  discount.cpp
//  startingOutWith
//
//  Created on 6/22/17.
//  Program 2-23 on p66
/* 
itom normally sells for $59.95
on sale - price reduced by 20 percent
*/


#include <iostream>
using namespace std;

int discount()
{
    double itemprice = 59.95, discount, saleprice;

    cout << "What is the discount price? ";
    cin >> discount;

    saleprice = itemprice * (1 - discount/100);

    cout << "\nThe initial price was " << itemprice << "\n" ;
    cout << "The discount is " << discount <<  "%\n" ;
    cout << "The discounted  price is " << saleprice << "\n";
    return 0;
}

