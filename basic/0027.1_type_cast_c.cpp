#include <iostream>

using namespace std;

/*
	C: type cast 
*/

int main() {
	double a = 33.3;
	cout << "Double: " << a << endl;
	cout << "Int: " << (int)a << endl;
	cout << "Bool: " << (bool)a << endl;
	cout << "Char: " << (char)a << endl;

	int b = 34.321;
	cout << "double => int: " << b << endl; // 34


	double c = 5;
	cout << "int => double : " << c << endl; // 5

	cout << "\n==============\n";

	cout << "int / double = " << 44 / 12.5 << endl; // 3.52
	cout << "int(int / double) = " << int(44 / 12.5) << endl; // 3

	return 0;
}
