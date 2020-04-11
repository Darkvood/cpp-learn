#include <iostream>

using namespace std;

/*
	function overload
*/


int sum(int a, int b)
{
	return a + b;
}

// arg count
int sum(int a, int b, int c)
{
	return a + b + c;
}

// type
double sum(double a, double b)
{
	return a + b;
}

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "Int: " << sum(12, 12) << endl;
	cout << "Double: " << sum(1.5, 1.7) << endl;
	cout << "Arg count: " << sum(1, 2, 3) << endl;

	return 0;
}
