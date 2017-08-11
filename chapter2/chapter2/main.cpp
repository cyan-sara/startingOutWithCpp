//
//  main.cpp
//  chapter2
//
//  Created on 8/10/17.
//
//
#include "restuarantBill.h"
#include "anualPay.h"
#include "discount.h"
#include "diamond.h"

#include <iostream>
using namespace std;

int main()
{
    restuarantBill();
    cin.get();
    
    anualPay();
    cin.get();
    
    discount();
    cin.get();
    
    diamond();
    
}
