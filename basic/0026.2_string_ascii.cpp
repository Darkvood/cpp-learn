#include <iostream>

using namespace std;

/*
	string: ASCII
*/

int main() {
	setlocale(LC_ALL, "Rus");

	for (int i = 0; i <= 255; i++)
	{
		cout << "code = " << i << "\tchar = " << (char)i << endl;
	}

	cout << "\n\nsizeof(char) " << sizeof(char) << endl;

	return 0;
}
