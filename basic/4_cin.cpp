#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	int num;

	cout << "Введите число: ";
	cin >> num;
	cout << "Вы ввели число: " << num << "\n\n";

	int num2, num3;

	cout << "Укажите 2 числа" << endl;
	cin >> num2 >> num3;

	cout << "Первое число: " << num2 << endl << "Второе число: " << num3 << endl;


	return 0;
}