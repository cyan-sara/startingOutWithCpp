//
//  ch3.cpp
//  ch3
//
//  Created on 8/9/17.
//

#include "test.h"
#include "flowsOfTheOverAndUnderVariety.h"
#include "fixedExample.h"
#include "leftRight.h"
#include "getlinePractice.h"
#include "cinGetPractice.h"
#include "cinIgnorePractice.h"
#include "genderPercentages.h"

#include <iostream>
using namespace std;

int main ()
{
    cout << "setprecision practice"<<endl;
    test();
    cin.get();

    cout << "overflow and uderflow practice"<<endl;
    flowsOfTheOverAndUnderVariety();
    cin.get();

    cout << "fixed width practice"<<endl;
    fixedExample();
    cin.get();

    cout << "justification practice"<<endl;
    leftRight();
    cin.get();

    CnSWrong();
    cin.get();

    CnSRight();
    cin.get();

    cinGet();
    cin.get();
    
    cinIgnoreWrong();
    cinIgnoreRight();
    cin.get();

    genderPercentages();
    cin.get();
    
}
