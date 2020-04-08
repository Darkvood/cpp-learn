#include <iostream>
using namespace std;

/*
	Объявление:
		[type] [name];

	Определение:
		[type] [name] = [value];
		[name] = [value]
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a, b = 15;

	a = 42;
	cout << a << endl;

	a = 51;
	cout << "a: " << a << " b: " << b << endl;
	cout << endl;

	double c = 1.55;
	cout << c << endl;
	cout << endl;

	char d = 'D';
	cout << d << endl;
	cout << endl;

	bool truth = true, lie = false;
	cout << "truth: " << truth << " lie: " << lie << endl;
	cout << endl;


	return 0;
}