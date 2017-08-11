//
//  cinGetPractice.cpp
//  ch3
//
//  Created on 7/31/17.
//


// cin ignores leading whitespaces, so you can't use it for a blank/Enter
// get is a member function of cin
// it reads a single character - including whitespace characters
// can be called:
//    cin.get(ch);
//    ch=cin.get();
// if the program is using cin.get to pause the screen and it doesn't need to store the character, you can just use
//        cin.get()


#include <iostream>
using namespace std;

int cinGet()
{
    char ch;
    
    cout << "This program has been paused. Press Enter to continue.";
    cin.get(ch);
    cout << "This program has been paused a second time. Press Enter to continue.";
    ch=cin.get();
    cout << "This program has been paused a third time. Press Enter to continue.";
    cin.get();
    cout << "Thank you!";
    return 0;
}
