#include <iostream>

using namespace std;

/*
	reference
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int a = 0;
	int& aRef = a; // reference to 'a'
	int* paRef = &aRef; // pointer on 'aRef'

	cout << "a\t" << a << endl; // 0
	cout << "aRef\t" << aRef << endl; // 0
	cout << "*paRef\t" << *paRef << endl; // 0


	cout << "\nset 'aRef=5'\n\n";
	aRef = 5;

	cout << "a\t" << a << endl; // 5
	cout << "aRef\t" << aRef << endl; // 5
	cout << "*paRef\t" << *paRef << endl; // 5

	cout << "\nset '*paRef=42'\n\n";
	*paRef = 42;

	cout << "a\t" << a << endl; // 42
	cout << "aRef\t" << aRef << endl; // 42
	cout << "*paRef\t" << *paRef << endl; // 42

	cout << "\nset 'a=33'\n\n";
	a = 33;

	cout << "a\t" << a << endl; // 3
	cout << "aRef\t" << aRef << endl; // 33
	cout << "*paRef\t" << *paRef << endl; // 33


	return 0;
}
