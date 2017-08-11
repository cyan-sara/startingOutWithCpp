//Write a program that asks the user for the number of males and the number of females regestered in a class. 
//The program should display the percentage of males and females in the class
//Hint : Suppose there are 8 males and 12 females in a class. There are 20 students in the class. 
//The percentage of males can be calculated as 8/20 = 0.4,  or 40%. The percentage of females can be calculated as 12/20 = 0.6, or 60%.
// Chapter 3 Programming Challenges #5


#include <iostream>
using namespace std;

int genderPercentages()
{
	int men;
	int women;
	int total;
	double perWomen, perMen;

	cout << "This program calculates the gender percentages in a class.\nPlease enter the number of men: ";
	cin >> men;
    cout << "The number of men is " << men << endl;
	cout << "Please enter the number of women: ";
	cin >> women;
    cout << "The number of women is " << women << endl;
	cout << "Please enter the total number of students: ";
	cin >> total;
    cout << "The total number of students is " <<total <<endl;
	
	perMen = men*100/total;
	perWomen = women*100/total;

	cout << "The percentage of men in the class is" << perMen << "%\n";
	cout << "The percentage of women in the class is" << perWomen << "%"<<endl;
    return 0;
    
}

