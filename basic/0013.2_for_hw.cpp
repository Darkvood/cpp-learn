#include <iostream>
using namespace std;

/*
	for
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int x, y;
	char symbol;

	cout << "Укажите высоту (1-50): ";
	cin >> y;

	cout << "Укажите ширину (1-50): ";
	cin >> x;

	cout << "Укажите символ для повторения: ";
	cin >> symbol;

	if (x > 50) x = 50;
	if (x < 1) x = 1;

	if (y > 50) y = 50;
	if (y < 1) y = 1;

	cout << endl;

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			cout << symbol;
		}

		cout << endl;
	}


	return 0;
}