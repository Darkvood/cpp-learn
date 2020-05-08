#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	Car()
	{
		cout << "[Car] constructor" << endl;
	}
	~Car()
	{
		cout << "[Car] destructor" << endl;
	}

	void drive()
	{
		cout << "to drive" << endl;
	}

	void getName() {
		cout << "I'm the car" << endl;
	}
};

class Airplane
{
public:
	Airplane()
	{
		cout << "[Airplane] constructor" << endl;
	}
	~Airplane()
	{
		cout << "[Airplane] destructor" << endl;
	}

	void fly()
	{
		cout << "to fly" << endl;
	}

	void getName() {
		cout << "I'm the airplane" << endl;
	}
};

// creating order = Car -> Airplane -> FlyingCar
class FlyingCar: public Car, public Airplane
{
public:
	FlyingCar()
	{
		cout << "[FlyingCar] constructor" << endl;
	}
	~FlyingCar()
	{
		cout << "[FlyingCar] destructor" << endl;
	}
};

int main()
{
	FlyingCar fc;

	cout << endl << endl;

	fc.::Car::getName();
	fc.drive();

	cout << endl;

	fc.::Airplane::getName();
	fc.fly();

	cout << endl << endl;

	/*
		[Car] constructor
		[Airplane] constructor
		[FlyingCar] constructor


		I'm the car
		to drive

		I'm the airplane
		to fly


		[FlyingCar] destructor
		[Airplane] destructor
		[Car] destructor
	*/

	return 0;
}
