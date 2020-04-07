#include <iostream>
using namespace std;

/*
	if-else
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a;

	cout << "Укажите число дл¤ проверки на чётность: ";
	cin >> a;


	if (a % 2 == 0) {
		cout << "Число: " << a << " - чётное" << endl;
	}
	else {
		cout << "Число: " << a << " - нечётное " << endl;
	}

	return 0;
}