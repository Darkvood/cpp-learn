#include <iostream>

using namespace std;

/*
	ternary operator
*/

int main() {
	int a;
	int b = 10;
	int c;
	int d;


	cout << "a = ";
	cin >> a;

	if (a >= b)
		c = a;
	else 
		c = b;

  // =

	d = a >= b ? a : b;

	cout << "c = " << c << "\td = " << d << endl;

	return 0;
}
