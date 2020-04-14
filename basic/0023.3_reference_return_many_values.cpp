#include <iostream>

using namespace std;

/*
	reference return many values
*/

void Foo(int &a, int &b)
{
	a += 10;
	b -= 20;
}

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 15, b = 42;

	
	cout << "a \t" << a << endl; // 15
	cout << "b \t" << b << endl; // 42

	Foo(a, b);
	cout << "\nFoo ->\n\n";

	cout << "a \t" << a << endl; // 25
	cout << "b \t" << b << endl; // 22

	return 0;
}
