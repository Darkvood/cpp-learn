#include <iostream>
using namespace std;

/*
	������� - ��� ������ ��������
		- ���������� (=)
		- ������� ����� (-)
	
	�������� - ��� ���� ���������
		- �������������� ��������:
			�������� (+)
			��������� (-)
			��������� (*)
			������� (/)
			������� �� ������ (%)
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 5; // ����������
	cout << a << endl;
	a = -a; // ������� �����
	cout << a << endl;

	cout << "\n\n";

	int b = 5, c = 2, d;

	d = b * c;
	cout << d << endl;

	cout << b + c << endl;

	// ���������� 
	d = 2 + 2 * 2;
	cout << d << endl;

	// ����������
	d = (2 + 2) * 2;
	cout << d << endl;

	return 0;
}