#include <iostream>

using namespace std;

/*
	reference as argument
*/

/*
	a - value
	b - reference
	c - pointer
*/
void Foo(int a, int &b, int *c)
{
	a = 10;
	b = 20;
	*c = 30;
}

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 5, b = 6, c = 7;

	cout << "a \t" << a << endl; // 5
	cout << "b \t" << b << endl; // 6
	cout << "c \t" << c << endl; // 7

	Foo(a, b, &c);
	cout << "\nFoo ->\n\n";

	cout << "a \t" << a << endl; // 5
	cout << "b \t" << b << endl; // 20
	cout << "c \t" << c << endl; // 30

	return 0;
}
