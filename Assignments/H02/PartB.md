### BankAccount Skeleton
#include <iostream>

using namespace std;

class BankAccount
{
private:
	double balance;
	int accountNumber;

public:
	BankAccount();

	BankAccount(double bal = 0, int acc = 121223) : balance(bal), accountNumber(acc) { cout << "A bank account is being created" << endl; };

	double getBalance(double balance)
	{
		return balance;
	}

	~BankAccount()
	{
		cout << "AAAAAND its gone." << endl;
	}


};

