// Kitchen helper by Andrew T
// This program is designed to help cooks in the kitchen.
// TODO: Add recipes, ingredients, and feature to match ingredients with recipes.

#include <iostream>
#include "Kitchen.h"
using namespace std;

void AlphaMenu(int userOption) {
	switch (userOption) {
	case 1:
		cout << "Input 0 to quit.\n";
		cout << "Input 1 to enter data into the program.\n";
		cout << "Input 2 to check data in the program.\n";
		cout << "Please enter an integer:\n";
		cout << endl;
		break;
	case 2:
		cout << "You want to enter data.\n";
		cout << "Input 1 to enter the amount of things cooking.\n";
		cout << "Input 2 to enter the number of cooks working.\n";
		cout << "Input 3 to enter oven settings.\n";
		cout << endl;
		break;
	case 3:
		cout << "You want to check the status.\n";
		cout << "Input 0 to quit.\n";
		cout << "Input 1 to check how many things are cooking.\n";
		cout << "Input 2 to check how many cooks are working.\n";
		cout << "Input 3 to check the oven's status.\n";
		cout << "Input 4 to check the safety status.\n";
		cout << endl;
		break;
	default:
		break;
	}
}

void primaryFunction() {
	string userString = "";
	Kitchen userKitchen;

	while (userString != "0") {
		AlphaMenu(1);
		cin >> userString;

		if (userString == "0") {
			break;
		}
		else if (userString == "1") {
			userString = "";
			AlphaMenu(2);
			cin >> userString;

			if (userString == "1") {
				userKitchen.SetNumCooking();
			}
			else if (userString == "2") {
				userKitchen.SetNumCooks();
			}
			else if (userString == "3") {
				userKitchen.SetOvenStatus();
				userKitchen.SetOvenTemp();
			}
		}
		else if (userString == "2") {
			userString = "";
			AlphaMenu(3);
			cin >> userString;

			if (userString == "1") {
				userKitchen.GetNumCooking();
			}
			else if (userString == "2") {
				userKitchen.GetNumCooks();
			}
			else if (userString == "3") {
				userKitchen.GetOvenStatus();
				userKitchen.GetOvenTemp();
			}
			else if (userString == "4") {
                userKitchen.SafetyCheck();
			}
			cout << endl;
		}

		cout << endl;
	}
}

int main() {
	primaryFunction();
	return 0;
}
