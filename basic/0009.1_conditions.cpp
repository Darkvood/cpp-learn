#include <iostream>
using namespace std;

/*
	if-else
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a;

	cout << "Укажите число: ";
	cin >> a;


	if (a > 5) {
		cout << "Ваше число больше 5" << endl;
	}
	else if(a == 5) {
		cout << "Ваше число равно 5" << endl;
	}
	else {
		cout << "Ваше число меньше 5" << endl;
	}

	return 0;
}