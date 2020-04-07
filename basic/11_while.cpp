#include <iostream>
using namespace std;

/*
	while
*/

int main() {
	setlocale(LC_ALL, "Rus");


	int a = 0;

	while (a <= 10) {
		cout << "Запуск: " << a << endl;
		a++;
	}

	return 0;
}