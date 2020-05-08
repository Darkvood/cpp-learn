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
	~A()
	{
		cout << "[A] destroyed" << endl;
	}
};

class B : public A 
{
public:
	B()
	{
		cout << "[B] created" << endl;
	}
	~B()
	{
		cout << "[B] destroyed" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "[C] created" << endl;
	}
	~C()
	{
		cout << "[C] destroyed" << endl;
	}
};


int main()
{
	C c1;

	cout << endl << endl;

	/*
	
	output:
		[A] created
		[B] created
		[C] created


		[C] destroyed
		[B] destroyed
		[A] destroyed
	*/

	return 0;
}
