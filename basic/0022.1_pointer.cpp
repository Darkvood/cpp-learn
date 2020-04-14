#include <iostream>

using namespace std;

/*
	pointers
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 5;
	int b = a; // copy by value

	b = 3;

	cout << "a: " << a << "\nb: " << b << endl << endl; // 5 and 3

	int* pa = &a; // copy by reference

	cout << "pa:\t" << pa << " - it is address" << endl;
	cout << "*pa:\t" << *pa << " - it is value" << endl;

	*pa = 42;

	cout << endl;
	cout << "a: " << a << endl;
	cout << "*pa:\t" << *pa << " - it is value" << endl;


	return 0;
}
