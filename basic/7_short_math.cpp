#include <iostream>
using namespace std;

/*
	Сокращенные формы записи арифметических формул
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 0;

	cout << a << endl;

	a += 20; // a = a + 20;
	cout << a << endl; // 20

	a -= 10; // a = a - 10;
	cout << a << endl; // 10

	a *= 3; // a = a * 3;
	cout << a << endl; // 30

	a /= 2; // a = a / 2
	cout << a << endl; // 15

	return 0;
}