#include <iostream>

using namespace std;

/*
	function: default params
*/


// void foo2(int a = 2, int b) => error 

void foo(int a = 2)
{
	for(int i = 0; i < a; i++)
	{
		cout << "#";
	}

	cout << endl;
}

int main() {
	setlocale(LC_ALL, "Rus");

	foo(); // ##
	foo(5); // #####

	return 0;
}
