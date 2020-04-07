#include <iostream>
using namespace std;

/*
	\n - новая строка
	\t - добавление табуляции
	
	\b - удаление последнего выведенного символа

	------------

	\\ - \
	\' - '
	\" - "

*/

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "-- Foo --\n\tFoo = \"bar\" / \'bar\' = 422\b";

	return 0;
}