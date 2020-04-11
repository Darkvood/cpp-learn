#include <iostream>

using namespace std;

/*
	Scope
*/

int value = 123; // global
int value2; // = 0

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 0;

	if (true)
	{
		a = 1;
		int b = 2;
	}

	cout << "a: " << a << endl;
	// 'b' is undefined 


	for (int i = 0; i < 3; i++) {
		// 'i' = 0
	}

	// 'i' is undefined 


	{
		int d = 2;
		// d = 2
	}

	// 'd' is undefined 

	cout << endl;

	int e = 1;

	{
		cout << "partent 'e': " << e << endl; // 1

		int e = 2;

		cout << "block - 'e': " << e << endl; // 2
	}

	cout << "main - e:" << e << endl; // 1 

	return 0;
}
