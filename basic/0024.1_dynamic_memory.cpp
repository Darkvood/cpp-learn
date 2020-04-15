#include <iostream>

using namespace std;

/*
	dynamic memory
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int* pa = new int;
	*pa = 10;

	cout << "Address\t" << pa << endl;
	cout << "Value\t" << *pa << endl;

	delete pa;

	return 0;
}
