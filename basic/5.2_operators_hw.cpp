#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	int a, b, c;

	cout << "������� 3 �����:\n";
	cin >> a >> b >> c;

	cout << "����� �����: " << a + b + c << endl;
	cout << "������������ �����: " << a * b * c << endl;
	cout << "������� ��������������: " << (double)(a + b + c) / 3;

	return 0;
}