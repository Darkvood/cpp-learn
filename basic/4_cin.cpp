#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	int num;

	cout << "������� �����: ";
	cin >> num;
	cout << "�� ����� �����: " << num << "\n\n";

	int num2, num3;

	cout << "������� 2 �����" << endl;
	cin >> num2 >> num3;

	cout << "������ �����: " << num2 << endl << "������ �����: " << num3 << endl;


	return 0;
}