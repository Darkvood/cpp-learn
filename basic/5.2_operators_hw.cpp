#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	int a, b, c;

	cout << "Укажите 3 числа:\n";
	cin >> a >> b >> c;

	cout << "Сумма чисел: " << a + b + c << endl;
	cout << "Произведение чисел: " << a * b * c << endl;
	cout << "Среднее арифметическое: " << (double)(a + b + c) / 3;

	return 0;
}