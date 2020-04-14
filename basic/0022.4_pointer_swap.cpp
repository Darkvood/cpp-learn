#include <iostream>

using namespace std;

/*
	pointer: swap values
*/


void Swap(int* pa, int* pb)
{
	int tempA = *pa;
	*pa = *pb;
	*pb = tempA;
}

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 0, b = 42;

	cout << "Before:\n";
	cout << "a: " << a << endl; // 0
	cout << "b: " << b << endl; // 42

	Swap(&a, &b);

	cout << "\nAfter:\n";
	cout << "a: " << a << endl; // 42
	cout << "b: " << b << endl; // 0

	return 0;
}
