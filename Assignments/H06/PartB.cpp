// Class example
// Address class comes first becuase it is declared in person.
// Compiler error if person comes first

#include <iostream>

using namespace std;


class Address
{
private:
    string street;
    string city;

public:
    Address(const string& st, const string& ct) : street(st), city(ct) {};

    void print() const
    {
        cout << street << ", " << city << endl;
    }
};

class Person
{
private:
    string name;
    const Address* address; // Agregation pointer
public:
    Person(const string& n, const Address* addr) : name(n), address(addr) {};
    void printInfo() const
    {
        cout << "Hello my name is " << name << endl;
        cout << "Address: ";
        address->print();
    }
};

int main()
{
    Address address("calle santa maria", "CDMX");

    Person p1("Areli", &address);
    Person p2("Nancy", &address);
    // Address is shared

    p1.printInfo();
    p2.printInfo();
    return 0;
}