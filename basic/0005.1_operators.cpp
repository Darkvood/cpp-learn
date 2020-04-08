#include <iostream>
using namespace std;

/*
	Унарные - для одного операнда
		- присвоение (=)
		- унарный минус (-)
	
	Бинарные - для двух операндов
		- арифметические опреации:
			сложение (+)
			вычитание (-)
			умножение (*)
			деление (/)
			деление по модулю (%)
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 5; // присвоение
	cout << a << endl;
	a = -a; // унарный минус
	cout << a << endl;

	cout << "\n\n";

	int b = 5, c = 2, d;

	d = b * c;
	cout << d << endl;

	cout << b + c << endl;

	// Приоритеты 
	d = 2 + 2 * 2;
	cout << d << endl;

	// Приоритеты
	d = (2 + 2) * 2;
	cout << d << endl;

	return 0;
}