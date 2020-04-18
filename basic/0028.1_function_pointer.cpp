#include <iostream>

using namespace std;

/*
	function pointer

	[type] name(*pointer_name) ([params])
*/

void Foo1()
{
	cout << "void Foo 1()" << endl;
}

void Foo2()
{
	cout << "void Foo 2()" << endl;
}

int Bar1(int a)
{
	return a + 1;
}

int Bar2(int a)
{
	return a - 1;
}

int main() {
	void (*fooPointer) ();

	fooPointer = Foo1;
	fooPointer();

	fooPointer = Foo2;
	fooPointer();

	cout << "\n===== Bar =====\n\n";

	int (*barPointer) (int a);

	barPointer = Bar1;
	cout << "Bar1(5): " << barPointer(5) << endl;

	barPointer = Bar2;
	cout << "Bar2(5): " << barPointer(5) << endl;

	return 0;
}
