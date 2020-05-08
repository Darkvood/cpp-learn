#include <iostream>
#include <string>

using namespace std;

class A
{
public:
	A()
	{
		cout << "[A] without arg" << endl;
	}

	A(int value)
	{
		cout << "[A] with arg " << value << endl;
	}
};

class B : public A 
{
public:
	B()
	{	
	}

	B(int value) : A(value)
	{
	}
};


int main()
{
	B b1; // [A] without arg
	B b2(5); // [A] with arg 5

	return 0;
}
