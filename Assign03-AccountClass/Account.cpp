#include "stdafx.h"
#include "Account.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int Account::accountNumber = 100000;

Account::Account()
{
	accountID = getNextAccountNumber();
	accountHolder = "no name";
	balance = 0.0;
}

Account::Account(string name, double amount)
{
	accountID = getNextAccountNumber();
	accountHolder = name;
	balance = amount;
}


int		Account::getAccountID()			const
{
	return accountID;
}

string	Account::getAccountHolder()		const
{
	return accountHolder;
}

double	Account::getBalance()			const
{
	return balance;
}

void	Account::setAccountHolder(string name)
{
	accountHolder = name;
}

void	Account::setBalance(double amt)
{
	balance = amt;
}

void	Account::depositAmount(double amt)
{
	if (amt >= 0)
	{
		balance += amt;
	}
}

void	Account::withdrawAmount(double amt)
{
	balance -= fabs(amt);
}


void	Account::displayAccountInfo()	const
{
	cout << accountID << "   $ " << fixed << setprecision(2) << setw(10) << balance << "    " << accountHolder << endl;
}

int 	Account::getNextAccountNumber()	const
{
	return accountNumber++;
}