//
//  charactersNStrings.cpp
//  ch3
//
//  Created on 7/31/17.
//


//doesn't do what it's supposed to

#include <iostream>
#include <iomanip>
using namespace std;

int CnSWrong()
{
    string name;
    string city;
    
    cout << "Please enter your name full name: ";
    cin >> name;
    cout << "Enter the city you live in: ";
    cin >> city;
    
    cout << "Hello," << name <<endl;
    cout << "You live in " << city << endl;
    return 0;
}

//cin does not like spaces
//    Please enter your name: Sara Coalson
//    Enter the city you live in: Hello,Sara
//    You live in Coalson
//    Program ended with exit code: 0
//can use getline to get the whole line



#include <iostream>
#include <iomanip>
using namespace std;

int CnSRight()
{
    string name;
    string city;
    
    cout << "Please enter your name full name: ";
    getline(cin, name);
    cout << "Enter the city you live in: ";
    getline(cin, city);
    
    cout << "Hello," << name <<endl;
    cout << "You live in " << city << endl;
    return 0;
}
/*
 Please enter your name: Sara Coalson
 Enter the city you live in: Abilene
 Hello,Sara Coalson
 You live in Abilene
 Program ended with exit code: 0
*/
