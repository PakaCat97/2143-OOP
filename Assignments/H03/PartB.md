### Here is an example of a child class inheriting from a parent class and overriding its method.

#include <iostream>

using namespace std;

// Base Class / Parent Class
class Vehicle
{
protected: // Protected attribute to allow access to other classes.

	string brand;

public:

	Vehicle(string b) // Constructor
	{
		brand = b;
	}

	virtual void drive() // Virtual keyword in base class allows for method overriding.
	{
		cout << brand << " Vehicle is driving..." << endl;
	}
};

 // Derived Class / Child Class
class Car: public Vehicle
{
private:

	int doors;

public:

	Car(string b, int d) : Vehicle(b) // Car constuctor calls Vehicle constructor using an initilization list
	{
		doors = d;
	}

	void drive() override
	{
		cout << brand << " car with " << doors << " doors is driving..." << endl;
	}
};

int main()
{
	string vBrand = "Chevy"; // Brand for Vehicle
	string cBrand = "Honda"; // Brand for Car
	int doors = 4; // Amount of doors car has
	Vehicle truck(vBrand);
	Car automobile(cBrand,doors);

	truck.drive(); // Calling drive method in Vehicle (base class / parent class)

	automobile.drive(); // Calling overriden drive method in Car (dervied class / child class)


	return 0;
}
