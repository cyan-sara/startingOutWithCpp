//
//  test.cpp
//  ch3
//
//  Created on 6/22/17.
//
//


#include <iostream>
#include <iomanip>

using namespace std;
int test()
{
    double testnum = 3.14159 ;
    cout << "This will output 3.14159 with its precision set to three decimals"<<endl;
    cout << setprecision(3) << testnum <<endl;
    return 0;
}

