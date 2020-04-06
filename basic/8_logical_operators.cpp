#include <iostream>
using namespace std;

/*
	���������� ��������

	���������:
		<  - ������
		>  - ������
		<= - ������ ��� �����
		>= - ������ ��� �����

	���������:
		== - �����
		!= - �� �����

	����������� ������� � ��������:
		&& - �
		|| - ���
		!  - ��������
*/

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "1 > 2: " << (1 > 2) << endl; // 0
	cout << "1 < 2: " << (1 < 2) << endl; // 1
	cout << "2 < 2: " << (2 < 2) << endl; // 0

	cout << endl;
	cout << "2 <= 2: " << (2 <= 2) << endl; // 1
	cout << "3 <= 2: " << (3 <= 2) << endl; // 0


	cout << endl;
	cout << "1 == 1: " << (1 == 1) << endl; // 1
	cout << "1 != 1: " << (1 != 1) << endl; // 0
	cout << "1 == 2: " << (1 == 2) << endl; // 0
	cout << "1 != 2: " << (1 != 2) << endl; // 1

	cout << endl;
	cout << "true && true: " << (true && true) << endl; // 1
	cout << "true && false: " << (true && false) << endl; // 0
	cout << "true || false: " << (true || false) << endl; // 1
	cout << "true || true: " << (true || true) << endl; // 1

	cout << endl;
	cout << "!(true && true): " << !(true && true) << endl; // 0
	cout << "!(true && false): " << !(true && false) << endl; // 1

	return 0;
}