#include <iostream>
using namespace std;

// dymanic memery 

class A
{
public:
	A()
	{
		cout << "[A] malloc B" << endl;
	}
	virtual ~A()
	{
		cout << "[A] alloc B" << endl;
	}

};

class B : public A
{
public:
	B()
	{
		cout << "[B] malloc" << endl;
	}
	~B() override
	{
		cout << "[B] alloc" << endl;
	}
};

int main()
{
	A* bptr = new B;
	delete bptr;

	/*
		[A] malloc B
		[B] malloc
		[B] alloc
		[A] alloc B
	*/

	return 0;
}
