#include <iostream>

using namespace std;

/*
	pointer: return many values
*/


void Foo(int* pa, int* pb, int* pc)
{
	(*pa)++;
	*pb = 42;
	*pc = 146;
}

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 0, b = 0, c = 0;

	cout << "Before:\n";
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;

	Foo(&a, &b, &c);
	
	cout << "\nAfter:\n";
	cout << "a: " << a << endl; // 1
	cout << "b: " << b << endl; // 42
	cout << "c: " << c << endl; // 146

	return 0;
}
