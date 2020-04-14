#include <iostream>

using namespace std;

/*
	function: recursion
*/

int foo(int a)
{
	if (a < 1) return 0;

	a--;
	
	cout << "a: "  << a << endl;

	return foo(a);
}


int sumNumbers(int num)
{
	if (num < 1) return 0;

	return num + sumNumbers(num - 1);
}

int factorial(int num)
{
	if (num <= 0) return 0;
	if (num == 1) return 1;

	return num * factorial(num - 1);
}

int main() {
	setlocale(LC_ALL, "Rus");

	foo(5); // 0

	cout << "\nSum Numbers 0 - 10: " << sumNumbers(10) << endl;

	cout << "\nFactorial 5: " << factorial(5) << endl;

	return 0;
}
