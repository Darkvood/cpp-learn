#include <iostream>
#include <string>

using namespace std;

class IDrivable
{
public:
	void virtual ride() = 0;
	void virtual EwistWheel() = 0;
};

class Car: public IDrivable {
	void ride()
	{
		cout << "Car.ride()" << endl;
	}

	void EwistWheel()
	{
		cout << "Car.EwistWheel()" << endl;
	}
};

class Stool : public IDrivable {
	void ride()
	{
		cout << "Stool.ride()" << endl;
	}

	void EwistWheel()
	{
		cout << "Stool.EwistWheel()" << endl;
	}
};

class Human {
public:
	void rideOn(IDrivable & const vehicle)
	{
		vehicle.ride();
		vehicle.EwistWheel();
	}
};

int main()
{
	Car myCar;
	Stool myStool;

	Human Petya;

	Petya.rideOn(myCar);

	cout << endl;

	Petya.rideOn(myStool);

	/*
		Car.ride()
		Car.EwistWheel()

		Stool.ride()
		Stool.EwistWheel()
	*/

	return 0;
}
