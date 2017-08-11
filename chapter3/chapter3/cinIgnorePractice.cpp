//
//  cinIgnorePractice.cpp
//  ch3
//
//  Created by Sara Coalson on 7/31/17.
//  Copyright © 2017 Sara Coalson. All rights reserved.
//


#include <iostream>
using namespace std;

int cinIgnoreWrong()
{
    char ch; //define a char
    int number; // define an int
    cout << "Enter a number: ";
    cin >> number; // read the number
    cout << "Enter a character: ";
    ch = cin.get();
    cout << "Thank You!\n";
    return 0;
}

/*
 so mixing cin >> and cin.get can get a bit confusing
    Enter a number: 6
    Enter a character: Thank You!
    Program ended with exit code: 0
 
 hitting Enter will create a newline character
 cin will stop reading at the \n , but won't read it
 cin.get comes along and goes "oh a charcter" and saves that without waiting for any input
 can fix this with cin.ignore
 general form - cin.ignore(n,c)
    n = int
    c = character
 so this wil cause cin to skip 20 chars or until \n
    cin.ignore(20, '\n')
*/


int cinIgnoreRight()
{
    char ch; //define a char
    int number; // define an int
    cout << "Enter a number: ";
    cin >> number;
    cin.ignore(); // skips the newline
    cout << "Enter a character: ";
    ch = cin.get();
    cout << "Thank You!\n";
    return 0;
}

