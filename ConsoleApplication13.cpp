// ConsoleApplication13.cpp : Defines the entry point for the console application.
//
#include"stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char menu; int count =1;
	do {
	cout << " please choose a menu\n A) ADULT GYM \n B) KIDS GYM\n C) SENIOR CITIZEN GYM\n D) EXIT MENU \n";
	cin >> menu;
	
		switch (menu)
		{
		case 'A':
			cout << "adult gym PRICE IS RM 50\n"; break;
		case 'B':
			cout << "kids gym PRICE IS RM 20 \n"; break;
		case 'C':
			cout << "senior citizen gym PRICE IS FREE\n"; break;


		default :
				cout << "please enter a correct menu";
		}
		count = count - 1;
	} while (menu != 'D');
	cout << " this program is terminated \n";
	return 0;

}
