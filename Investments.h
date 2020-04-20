/*
 * Investment calculator program for calculating monthly compounded interest including monthly deposits
 *
 * Author: John T. Kiser
 * CS210
 * Dr. Jackie Kyger
 * 05 April 2020
 */

#ifndef INVESTMENTS_H		// guard against multiple inclusions of header data
#define INVESTMENTS_H

#include <iostream>
#include <iomanip>

using namespace std;

class Investments {			// declare Investments class

public:

	Investments();			// default constructor

	void drawMenu();		// method to draw the user menu

						// following section declares 'setter' methods for each class data member/attribute


	void setInitialInvestment(double initialInvestment);
	void setMonthlyDeposit(double monthlyDeposit);
	void setAnnualInterest(double annualInterest);
	void setAccountBalance(double accountBalance);
	void setYearEndInterest(double yearEndInterest);
	void setMonthlyInterest(double monthlyInterest);
	void setNumberOfYears(int numberOfYears);

						// following section declares 'getter' methods for each class data member/attribute

	double getInitialInvestment();
	double getMonthlyDeposit();
	double getAnnualInterest();
	double getAccountBalance();
	double getYearEndInterest();
	double getMonthlyInterest();
	int getNumberOfYears();

	void displayResults();		// declare method for calculating and formatted display of information

private:

								// following section declares class data members/attributes used by class methods
	double initialInvestment;
	double monthlyDeposit;
	double annualInterest;
	double accountBalance;
	double yearEndInterest;
	double monthlyInterest;
	int numberOfYears;

};

#endif
