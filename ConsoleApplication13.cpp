#include"stdafx.h"
#include <iostream>
#include <string>
	using namespace std;
int _try()
 
	
{
	switch (menu)
		{
		case 'A':
			cout << "adult gym PRICE IS RM 50\n";
			cout << month * 50;

			break;
			
		case 'B':
			cout << "kids gym PRICE IS RM 20 \n";
			cout << month * 20; 
			break;
		case 'C':
			cout << "senior citizen gym PRICE IS FREE\n";
			cout << month * 0;
			break;


		default:
			cout << "please enter a correct menu";
		}
		count = count - 1;
	} while (menu != 'D');
	cout << " this program is terminated \n";
	return 0;
}

int main()
{
	char menu; int count = 1, month = 0;
	do {
		cout << " please choose a menu\n A) ADULT GYM \n B) KIDS GYM\n C) SENIOR CITIZEN GYM\n D) EXIT MENU \n";
		cin >> menu;
		cout << "how many month ?";
		cin >> month;

	try();
	return 0;9
		

}


