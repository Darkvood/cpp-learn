#include <iostream>
using namespace std;

/*
	if-else
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a;

	cout << "”кажите число дл€ проверки на чЄтность: ";
	cin >> a;


	if (a % 2 == 0) {
		cout << "„исло: " << a << " - чЄтное" << endl;
	}
	else {
		cout << "„исло: " << a << " - нечЄтное " << endl;
	}

	return 0;
}