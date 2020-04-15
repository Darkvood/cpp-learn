#include <iostream>

using namespace std;

/*
	dynamic memory: nullptr
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int* pa = new int;
	*pa = 10;

	cout << "Address\t" << pa << endl;
	cout << "Value\t" << *pa << endl;

	delete pa; // frist!
	pa = nullptr; // second!

	cout << "\npa: " << pa << endl; // 0


	return 0;
}
