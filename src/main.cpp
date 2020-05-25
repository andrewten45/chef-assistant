// Chef assistant by Andrew T
// This program is designed to help cooks in the kitchen.
// TODO: Add recipes, ingredients, and feature to match ingredients with recipes.

#include <iostream>
#include "Kitchen.h"

void AlphaMenu(int userOption) {
	switch (userOption) {
	case 1:
		std::cout << "Input 0 to quit.\n";
		std::cout << "Input 1 to enter data into the program.\n";
		std::cout << "Input 2 to check data in the program.\n";
		std::cout << "Please enter an integer:\n";
		std::cout << std::endl;
		break;
	case 2:
		std::cout << "You want to enter data.\n";
		std::cout << "Input 1 to enter the amount of things cooking.\n";
		std::cout << "Input 2 to enter the number of cooks working.\n";
		std::cout << "Input 3 to enter oven settings.\n";
		std::cout << std::endl;
		break;
	case 3:
		std::cout << "You want to check the status.\n";
		std::cout << "Input 0 to quit.\n";
		std::cout << "Input 1 to check how many things are cooking.\n";
		std::cout << "Input 2 to check how many cooks are working.\n";
		std::cout << "Input 3 to check the oven's status.\n";
		std::cout << "Input 4 to check the safety status.\n";
		std::cout << std::endl;
		break;
	default:
		break;
	}
}

int main() {
	std::string userString = "";
	Kitchen userKitchen;

	while (userString != "0") {
		AlphaMenu(1);
		std::cin >> userString;

		if (userString == "0") {
			break;
		}
		else if (userString == "1") {
			userString = "";
			AlphaMenu(2);
			std::cin >> userString;

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
			std::cin >> userString;

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
			std::cout << std::endl;
		}

		std::cout << std::endl;
	}

	return 0;
}
