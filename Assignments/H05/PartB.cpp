// Short code demonstrating the concept of abstraction by moddeling a banking system.

#include <iostream>

using namespace std;

// Abstract Class (interface)
class BankAccount
{
    public:
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual double getBalance() const = 0;

    virtual ~BankAccount() = default;  //Destructor
};

// Concrete Class
class SavingsAccount : public BankAccount
{
    private:
    double balance;
    string holder;

    // The const key word ensures data wont be changed just read
    void logTransaction(string type, double amount) const
    {
        cout << "LOG: " << type << "of $" << amount << "for " << holder << endl; 
    }

    void encryptTransaction(double amount) const
    {
        cout << "ENCRYPT: Securing transaction of $" << amount << endl;
    }

    void balanceLedger() const
    {
        cout << "BALANCE: Balancing ledger..." << endl;
    }

    public:
    // Defualt constructer init list
    SavingsAccount(const string &accountHolder) : balance(0.0), holder(accountHolder){};

    // Override + final means no one can override code further
    void deposit (double amount) override final 
    {
        logTransaction(holder, amount);
        encryptTransaction(amount);
        balance += amount; //Take whats in balance and add the amount deposited to it
        balanceLedger();
    }

    // Override on its own means that the method can be overriden further in another class
    void withdraw(double amount) override
    {
        logTransaction(holder, amount);
        encryptTransaction(amount);
        balance -= amount; //Take whats in balance and subtract amount from it
        balanceLedger();
    }

    double getBalance() const override {
        return balance;
    }
};

int main()
{
    // pointer to BankAccount class but it actually points to a SavingsAccount object
    BankAccount* account = new SavingsAccount("Carlos");

    account->deposit(100);  // Polymorphic call
    account->withdraw(50);  // Polymorphic call
    cout << "Balance: $" << account->getBalance() << endl;
    // The calls call the methods in SavingsAccount
    delete account;
    return 0;

}