//
//  flowsOfTheOverAndUnderVariety.cpp
//  ch3
//
//  Created on 6/26/17.
//


#include <iostream>
#include "flowsOfTheOverAndUnderVariety.h"
using namespace std;

int flowsOfTheOverAndUnderVariety()
{
    float test;
    cout << "I am assigning test the value of 2.0e38*1000. This should overflow test.";
    test = 2.0e38*1000; // should overflow test
    cout << test << endl;
    cout << "I am assigning test the value of 2.0e-38 / 2.0e38. This should underflow test.";
    test = 2.0e-38 / 2.0e38; // should underflow test
    cout << test << endl;
    return 0;
}

