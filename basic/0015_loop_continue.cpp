#include <iostream>
using namespace std;

/*
	Цикл + continue
*/

int main() {
	setlocale(LC_ALL, "Rus");

	for (int i = 0; i <= 30; i++) {
		if (i % 2 == 0) continue;

		cout << "Нечётное число: " << i << endl;
	}

	// [while + continue] && [do while + continue] = <3

	return 0;
}