#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass();
	void PrintHello();

private:

};

MyClass::MyClass(){ }

void MyClass::PrintHello()
{
	cout << "Hello!" << endl;
}

int main()
{
	MyClass c1;

	c1.PrintHello(); // Hello!

	return 0;
}

