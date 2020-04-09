#include <iostream>

using namespace std;

/*
	function

	[type] [name]([params])
	{
		..code..

		[if type not 'void' - return]
	}

	Must be declared before call
*/


void foo()
{
	cout << "Foo is called" << endl;
}

int sum(int a, int b) 
{
	return a + b;
}

int main() {
	setlocale(LC_ALL, "Rus");

	foo(); // call function [name]()

	cout << "42 + 42 = " << sum(42, 42) << endl;

	return 0;
}
