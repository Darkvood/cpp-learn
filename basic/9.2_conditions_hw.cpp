#include <iostream>
using namespace std;

/*
	if-else
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a;

	cout << "������� ����� ��� �������� �� ��������: ";
	cin >> a;


	if (a % 2 == 0) {
		cout << "�����: " << a << " - ������" << endl;
	}
	else {
		cout << "�����: " << a << " - �������� " << endl;
	}

	return 0;
}