#include <iostream>
using namespace std;

/*
	if-else
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a;

	cout << "������� �����: ";
	cin >> a;


	if (a > 5) {
		cout << "���� ����� ������ 5" << endl;
	}
	else if(a == 5) {
		cout << "���� ����� ����� 5" << endl;
	}
	else {
		cout << "���� ����� ������ 5" << endl;
	}

	return 0;
}