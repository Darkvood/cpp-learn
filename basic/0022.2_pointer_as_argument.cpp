#include <iostream>

using namespace std;

/*
	pointer as argument
*/

void Foo(int a)
{
	a++;
}

void Foo2(int* pa)
{
	(*pa)++;
}

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 0;

	Foo(a); // by value
	cout << "a: " << a << endl; // 0

	Foo2(&a); // by reference
	cout << "a: " << a << endl; // 1

	return 0;
}
