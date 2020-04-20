/*
 * Investment calculator program for calculating monthly compounded interest including monthly deposits
 *
 * Author: John T. Kiser
 * CS210
 * Dr. Jackie Kyger
 * 05 April 2020
 */

#include <iostream>
#include <iomanip>

using namespace std;

#include "Investments.h"			// include text from Investment class header file

int main() {

		// variable declaration section

	string userInput = "";			// string to be used to capture user input
	double initialInvestment = 0.0;	// initial investment amount to be entered by user
	double monthlyDeposit = 0.0;	// amount of monthly deposits to be entered by user
	double annualInterest = 0.0;	// initial annual interest amount to be entered by user
	int numberOfYears = 0;			// number of years to be entered by user

	Investments investment;			// Investments class object creation

		// main program code section

	while(true) {					// main program loop

		investment.drawMenu();		// call investment object method to draw the menu

		userInput = "";				// set user input to empty string at beginning of loop

		cout << "Initial Investment:  $ ";

		cin >> userInput;			// collect user input into string for inital investment amount

									// test if user input indicates to quit the program, if so, return 0 and exit

		if (userInput == "q" || userInput == "Q" || userInput == "quit" || userInput == "Quit" || userInput == "QUIT") {
			cout << endl << "Goodbye." << endl << endl;
			return 0;
		}

					// if user input does not indicate to quit program
					// try to convert input into double and store in double variable
					// if string of input is not a valid double, prompt user to start again and continue back to main loop

		try {
		initialInvestment = stod(userInput);
		}
		catch (invalid_argument&) {
			cout << "Invalid entry, please try again" << endl;
			cout << "Press 'Enter' to continue..." << endl << endl;
			cin.ignore();
			cin.get();
			continue;
		}

		userInput = "";			// set user input to empty string

		cout << "Monthly Deposit:  $ ";

		cin >> userInput;			// collect user input into string for monthly deposit amount


					// test if user input indicates to quit the program, if so, return 0 and exit

		if (userInput == "q" || userInput == "Q" || userInput == "quit" || userInput == "Quit") {
			cout << endl << "Goodbye." << endl << endl;
			return 0;
		}

					// if user input does not indicate to quit program
					// try to convert input into double and store in double variable
					// if string of input is not a valid double, prompt user to start again and continue back to main loop

		try {
		monthlyDeposit = stod(userInput);
		}
		catch (invalid_argument&) {
			cout << "Invalid entry, please try again" << endl;
			cout << "Press 'Enter' to continue..." << endl << endl;
			cin.ignore();
			cin.get();
			continue;
		}

		userInput = "";		// set user input to empty string

		cout << "Annual Interest:  % ";

		cin >> userInput;		// collect user input into string for annual interest amount


					// test if user input indicates to quit the program, if so, return 0 and exit

		if (userInput == "q" || userInput == "Q" || userInput == "quit" || userInput == "Quit") {
			cout << endl << "Goodbye." << endl << endl;
			return 0;
		}

					// if user input does not indicate to quit program
					// try to convert input into double and store in double variable
					// if string of input is not a valid double, prompt user to start again and continue back to main loop

		try {
		annualInterest = stod(userInput);
		}
		catch (invalid_argument&) {
			cout << "Invalid entry, please try again" << endl;
			cout << "Press 'Enter' to continue..." << endl << endl;
			cin.ignore();
			cin.get();
			continue;
		}


		userInput = "";		// set user input to empty string

		cout << "Number of years:  ";

		cin >> userInput;			// collect user input into string for number of years

					// test if user input indicates to quit the program, if so, return 0 and exit

		if (userInput == "q" || userInput == "Q" || userInput == "quit" || userInput == "Quit") {
			cout << endl << "Goodbye." << endl << endl;
			return 0;
		}

					// if user input does not indicate to quit program
					// try to convert input into integer and store in integer variable
					// if string of input is not a valid integer, prompt user to start again and continue back to main loop

		try {
		numberOfYears = stoi(userInput);
		}
		catch (invalid_argument&) {
			cout << "Invalid entry, please try again" << endl;
			cout << "Press 'Enter' to continue..." << endl << endl;
			cin.ignore();
			cin.get();
			continue;
		}

					//await user input to continue
		cin.ignore();
		cout << "Press 'Enter' to continue..." << endl << endl;
		cin.get();


		// following code section assigns the collected data into Investment class object data members

		investment.setInitialInvestment(initialInvestment);
		investment.setMonthlyDeposit(monthlyDeposit);
		investment.setAnnualInterest(annualInterest);
		investment.setNumberOfYears(numberOfYears);

		investment.displayResults();		// Investment class method to calculate and display the results
											// based on collected data from user inputs

				//await user input to continue

		cout << "Press 'Enter' to continue..." << endl;
		cin.get();


	}

	return 0;
}
