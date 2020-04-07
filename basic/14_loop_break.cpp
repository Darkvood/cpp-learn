#include <iostream>
using namespace std;

/*
	Цикл + break
*/

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "Начало цикла for\n\n";

	for (int i = 0; ; i++) {
		cout << "Итерация цикла for №" << i + 1 << endl;

		if (i == 5) break;
	}

	cout << "\nКонец цикла for\n";


	cout << "\nНачало цикла while\n\n";

	int a = 0;
	while (true) {
		cout << "Итерация цикла while №" << ++a << endl;

		if (a == 7) break;
	}

	cout << "\nКонец цикла while\n";

	return 0;
}