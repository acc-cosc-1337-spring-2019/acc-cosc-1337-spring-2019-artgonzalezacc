#include "savings_account.h"
/*
double interest = amount * interest_rate * time / 100;
*/


void SavingsAccount::add_interest_earned() 
{
	double interest_earned = get_balance()  * time * interest_rate / 100;

	deposit(interest_earned);
}