#include <iostream>
using namespace std;

/*
	\n - ����� ������
	\t - ���������� ���������
	
	\b - �������� ���������� ����������� �������

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