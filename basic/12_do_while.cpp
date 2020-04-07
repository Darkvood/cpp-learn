#include <iostream>
using namespace std;

/*
	do while
*/

int main() {
	setlocale(LC_ALL, "Rus");


	int a = 100;

	do { 
		cout << "a = " << a << endl;
		a++;
	} while (a <= 10);

	return 0;
}