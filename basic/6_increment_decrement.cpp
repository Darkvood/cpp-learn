#include <iostream>
using namespace std;

/*
	Инкремент и декремент - унарные операторы
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 1;

	cout << a << endl; // 1
	cout << a++ << endl; // 1
	cout << a << endl; // 2
	cout << a-- << endl; // 2
	cout << a << endl; // 1
	cout << --a << endl; // 0

	cout << endl;

	int b = 1;
	cout << ++b + 2 << endl; // 4
	cout << b++ + 2 << endl; // 4
	cout << b + 2 << endl; // 5

	return 0;
}