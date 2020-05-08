#include <iostream>
#include <string>

using namespace std;

class A
{
public:
	A()
	{
		cout << "[A] created" << endl;
	}
};

class B : public A 
{
public:
	B()
	{
		cout << "[B] created" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "[C] created" << endl;
	}
};


int main()
{
	A a1;
	// [A] created

	cout << "\n---------\n\n";
	B b1;
	// [A] created
	// [B] created

	cout << "\n---------\n\n";
	C c1;
	// [A] created
	// [B] created
	// [C] created

	/*

	output:
		[A] created

		---------

		[A] created
		[B] created

		---------

		[A] created
		[B] created
		[C] created
	*/

	return 0;
}
