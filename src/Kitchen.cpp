#include <iostream>
#include "Kitchen.h"
using namespace std;

void Kitchen::GetNumCooking() {
	if (cooking == 0) {
		cout << "Nothing's cooking.\n";
	}
	else if (cooking == 1) {
		cout << "There's " << cooking << " thing cooking.\n";
	}
	else {
		cout << "There are " << cooking << " things cooking.\n";
	}
}

void Kitchen::GetNumCooks() {
	if (cooks == 0) {
		cout << "Nobody's cooking.\n";
	}
	else if (cooks == 1) {
		cout << "There's " << cooks << " cook working.\n";
	}
	else {
		cout << "There are " << cooks << " cooks working.\n";
	}
}

void Kitchen::GetOvenStatus() {
	if (status == 0) {
		cout << "Oven is off.\n";
	}
	else if (status == 1) {
		cout << "Oven is on, and set to bake.\n";
	}
	else if (status == 2) {
		cout << "Oven is on, and set to broil.\n";
	}
}

void Kitchen::GetOvenTemp() {
	if (ovenTemp == 1) {
		cout << "The oven is set to " << ovenTemp << " degree Fahrenheit.\n";
	}
	else {
		cout << "The oven is set to " << ovenTemp << " degrees Fahrenheit.\n";
	}
}

void Kitchen::SetNumCooking() {
	int numCooking;
	cout << "Please enter the number of items cooking:\n";
	cin >> numCooking;

	if (numCooking == 0) {
		cout << "Nothing's cooking.\n";
	}
	else if (numCooking == 1) {
		cout << "There's " << numCooking << " thing cooking.\n";
	}
	else {
		cout << "There are " << numCooking << " things cooking.\n";
	}

	cooking = numCooking;
}

void Kitchen::SetNumCooks() {
	int numCooks;
	cout << "Please enter the number of cooks working:\n";
	cin >> numCooks;

	if (numCooks == 0) {
		cout << "Nobody's cooking.\n";
	}
	else if (numCooks == 1) {
		cout << "There's " << numCooks << " cooks working.\n";
	}
	else {
		cout << "There are " << numCooks << " cooks working.\n";
	}

	cooks = numCooks;
}

void Kitchen::SetOvenStatus() {
	string userString = "";
	enum OvenState {OVEN_OFF, OVEN_ON_BAKE, OVEN_ON_BROIL};
	OvenState ovenStatus = OVEN_OFF;

	cout << "Please input 0 to turn the oven off and 1 or 2 to turn on bake or broil, respectively.\n";
	cin >> userString;

	if (userString == "0") {
		ovenStatus = OVEN_OFF;
		cout << "Oven is off.\n";
	}
	else if (userString == "1") {
		ovenStatus = OVEN_ON_BAKE;
		cout << "Oven is on, and set to bake.\n";
	}
	else if (userString == "2") {
		ovenStatus = OVEN_ON_BROIL;
		cout << "Oven is on, and set to broil.\n";
	}

	status = ovenStatus;
}
void Kitchen::SetOvenTemp() {
	int ovenHeat;

	cout << "What temperature (F)?\n";
	cin >> ovenHeat;

	if (ovenHeat == 1) {
        ovenTemp = ovenHeat;
		cout << "The oven is set to " << ovenHeat << " degree Fahrenheit.\n";
	}
	else {
	    if (ovenHeat < 0) {
            cout << "Error: Oven heat cannot be negative.\n";
	    }
	    else if (ovenHeat > 1000) {
            cout << "Error: Oven heat cannot be greater than 1000.\n";
	    }
	    else {
	        ovenTemp = ovenHeat;
            cout << "The oven is set to " << ovenHeat << " degrees Fahrenheit.\n";
	    }
	}
}
void Kitchen::SafetyCheck() {
    cout << "Checking if the kitchen has common fire hazards.\n";
    if (cooks > 0 || (cooks == cooking && cooks == status)) {
        cout << "Kitchen has no common fire hazards.\n";
    }
    else {
        if (cooking != 0) {
            cout << "FIRE HAZARD: Items are cooking without cooks working.\n";
        }
        if (status != 0) {
            cout << "FIRE HAZARD: Oven is on without cooks working.\n";
        }
    }
}
