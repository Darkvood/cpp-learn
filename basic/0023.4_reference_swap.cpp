#include <iostream>

using namespace std;

/*
	reference swap
*/

template <class T>
void Swap(T &a, T &b)
{
	T temp = b;
	b = a;
	a = temp;
}

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "<< int >>" << endl;
	int a = 33, b = 77;

	cout << "a \t" << a << endl; // 33
	cout << "b \t" << b << endl; // 77

	Swap(a, b);
	cout << "\nSwap ->\n\n";

	cout << "a \t" << a << endl; // 77 
	cout << "b \t" << b << endl; // 33


	cout << "\n\n<< char >>" << endl;
	char a1 = 'A', b1 = 'B';

	cout << "a \t" << a1 << endl; // A
	cout << "b \t" << b1 << endl; // B

	Swap(a1, b1);
	cout << "\nSwap ->\n\n";

	cout << "a \t" << a1 << endl; // B 
	cout << "b \t" << b1 << endl; // A

	return 0;
}
