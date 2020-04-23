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
		this->size = other.size;
		this->data = new int[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}

		cout << "[" << this << "] call > constructor copy" << endl;
	}

	MyClass& operator = (const MyClass& other) {
		cout << "call > '=' " << endl;

		this->size = other.size;

		if (this->data != nullptr) {
			delete[] this->data;
		}

		this->data = new int[size] {};

		return *this;
	}

	~MyClass()
	{
		cout << "[" << this << "] call > destructor" << endl;
		delete[] data;
	}

private:
	int size;
};


int main()
{
	MyClass obj1(5);
    MyClass obj2 = obj1; // <-- call constructor copy 

	MyClass obj3(12);

	obj2 = obj3; // <-- call 'operator ='  -> create COPY with new reference

	return 0;
}

