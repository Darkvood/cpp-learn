#include <iostream>
using namespace std;

/*
	switch
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a, b;
	char action;

	cout << "Введите первое число: ";
	cin >> a;

	cout << "Введите второе число: ";
	cin >> b;

	cout << "Укажите действие(+, -, /, *)";
	cin >> action;

	switch (action) {
		case '+': {
			cout << "Сумма чисел: " << a + b << endl;
			break;
		}
		case '-': {
			cout << "Разность чисел:" << a - b << endl;
			break;
		}
		case '/': {
			cout << "Частное чисел: " << (float)a / b << endl;
			break;
		}
		case '*': {
			cout << "Произведение чисел: " << a * b << endl;
			break;
		}
		default: {
			cout << "Это уже не математика" << endl;
			break;
		}
	}

	return 0;
}