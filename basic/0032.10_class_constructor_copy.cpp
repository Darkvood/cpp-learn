#include <iostream>

using namespace std;

/*
	constructor copy	
*/

class MyClass
{
public:
	int* data;

	MyClass(int size) 
	{
		this->size = size;
		this->data = new int[size] {};

		cout << "[" << this << "] call > constructor" << endl;
	}

	MyClass(const MyClass& other)
	{
		// this->data = other.data;  <--- default 

		this->size = other.size;
		this->data = new int[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}

		cout << "[" << this << "] call > constructor copy" << endl;
	}

	~MyClass()
	{
		cout << "[" << this << "] call > destructor" << endl;
		delete[] data;
	}

private:
	int size;
};

void Foo(MyClass obj) // it will create a new object equals the param
{
	cout << "Foo: call by value" << endl;
}

int main()
{
	MyClass obj1(5);
	MyClass obj2(obj1);

	return 0;
}

