#include "atm.h"
#include<iostream>

int main()
{
	BankAccount account(123456, 500);
	Customer customer(account);
	ATM atm(customer);
	atm.display_balance();
	
	/*std::vector<BankAccount>accounts;
	BankAccount account(12345689, 500);  //object1
	BankAccount account1(55545689, 5000); //object2

	accounts.push_back(account);
	accounts.push_back(account1);

	for (auto act : accounts)
	{
		std::cout << act.get_balance() << "\n";
	}*/

	return 0;
}