# BankAccount Skeleton:
#include <iostream>

using namespace std;

class BankAccount
{
private:
	double balance; // HEY! READ THIS! ITS IMPORTANT WE DON'T DIRECTLY CHANGE THIS! ITS THE CUSTOMER'S MONEY!
	int accountNumber;  // !!! SAME HERE !!!

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

# Encapsulation Justification:

### balance
The balance data member should be kept private becuase that kind of information should only be known to the owner of the account. Some unscrupulous family member
of the individual could take advantge of the individual knowing the amount of money they have in the account, leading to some potential family issues.

### accountNumber
This data member should be kept private becuase it can be used by unscrupulous individuals to transfer money without the user's knowledge.
