/*
 * Investment calculator program for calculating monthly compounded interest including monthly deposits
 *
 * Author: John T. Kiser
 * CS210
 * Dr. Jackie Kyger
 * 05 April 2020
 */

#include "Investments.h"		// include text from Investments.h header file for class declarations


Investments::Investments() {	// class default constructor method to initialize class data members/attributes

	initialInvestment = 0.0;
	monthlyDeposit = 0.0;
	annualInterest = 0.0;
	accountBalance = 0.0;
	yearEndInterest = 0.0;
	monthlyInterest = 0.0;
	numberOfYears = 0;

}

void Investments::drawMenu() {	// class method for drawing formatted user menu

	system("clear");		// clear screen

	cout << "*********************************" << endl;
	cout << "*********  Data Input  **********" << endl;
	cout << "** Enter 'q' or 'quit' to exit **" << endl;
	cout << "*********************************" << endl << endl;

	return;

}

			// following section defines class 'setter' methods

void Investments::setInitialInvestment(double initialInvestment) { this->initialInvestment = initialInvestment; }
void Investments::setMonthlyDeposit(double monthlyDeposit) { this->monthlyDeposit = monthlyDeposit; }
void Investments::setAnnualInterest(double annualInterest) { this->annualInterest = annualInterest; }
void Investments::setAccountBalance(double accountBalance) { this->accountBalance = accountBalance; }
void Investments::setYearEndInterest(double yearEndInterest) { this->yearEndInterest = yearEndInterest; }
void Investments::setMonthlyInterest(double monthlyInterest) { this->monthlyInterest = monthlyInterest; }
void Investments::setNumberOfYears(int numberOfYears) { this->numberOfYears = numberOfYears; }

			// following section defines class 'getter' methods

double Investments::getInitialInvestment() { return this->initialInvestment; }
double Investments::getMonthlyDeposit() { return this->monthlyDeposit; }
double Investments::getAnnualInterest() { return this->annualInterest; }
double Investments::getAccountBalance() { return this->accountBalance; }
double Investments::getYearEndInterest() { return this->yearEndInterest; }
double Investments::getMonthlyInterest() { return this->monthlyInterest; }
int Investments::getNumberOfYears() { return this->numberOfYears; }


void Investments::displayResults() {	// definition of class method to calculate and provide formatted display of information

	system("clear");		// clear screen

	// calculate and display results


	cout << right << fixed << setprecision(2);	// set precision of 2 places for double variables (for monetary output)

	setAccountBalance(getInitialInvestment());	// start calculations with initial investment amount

						// output formatted display

	cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "========================================================"<< endl;
	cout << "Year \t" << "Year End Balance" << "       Year End Earned Interest" << endl;
	cout << "--------------------------------------------------------"<< endl;

	for (int i = 1; i <= getNumberOfYears(); i++) { // outer for loop for number of years

			setYearEndInterest(0.0);				// ensure year end interest is reset for each line

			for (int j = 1; j <= 12; j++) {			// inner for loop to calculate year end balance and year end interest amounts

				setMonthlyInterest(getAccountBalance() * ((getAnnualInterest()/100)/12));
				setYearEndInterest(getYearEndInterest() + getMonthlyInterest());
				setAccountBalance(getAccountBalance() + getMonthlyInterest());

			}

			// formatted output of calculated data
			cout << "  " << i << "\t     $" << right  << setw(8) << getAccountBalance() << "\t\t   $" << right << setw(8) << getYearEndInterest() << endl;

		}


	cout << endl << endl;	// provide spacing between display sections

	setAccountBalance(getInitialInvestment());	// start calculation with initial investment amount

									// output formatted display

	cout << "Balance and Interest With Additional Monthly Deposits" << endl;
	cout << "========================================================"<< endl;
	cout << "Year \t" << "Year End Balance" << "       Year End Earned Interest" << endl;
	cout << "--------------------------------------------------------"<< endl;

	for (int i = 1; i <= getNumberOfYears(); i++) {	// outer for loop for number of years

			setYearEndInterest(0.0);	// set year end interest to 0 for each iteration to ensure correct amount

			for (int j = 1; j <= 12; j++) {		// inner for loop to calculate year end balance and year end interest

				setMonthlyInterest((getAccountBalance() + getMonthlyDeposit()) * (getAnnualInterest()/100/12));
				setYearEndInterest(getYearEndInterest() + getMonthlyInterest());
				setAccountBalance(getAccountBalance() + getMonthlyInterest() + getMonthlyDeposit());

			}

			// formatted output of calculated data
			cout << "  " << i << "\t     $" << right << setw(8) << getAccountBalance() << "\t\t   $" << right << setw(8) << getYearEndInterest() << endl;

		}

	}
