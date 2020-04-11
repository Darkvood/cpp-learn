#include <iostream>

using namespace std;

/*
	function template
*/

template <typename T>
T sum(T a, T b)
{
	return a + b;
}

// 'class' = 'typename' 
template<class T1, class T2>
void foo(T1 a, T2 b)
{
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
}

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "Int: " << sum(3, 2) << endl; // 5
	cout << "Double: " << sum(1.0, 2.5) << endl; // 3.5

	cout << endl;
	foo(12, "String 1"); // a: 12 --- b: String 1

	cout << endl;
	foo("String 2", 42); // a: String 2 --- b: 42

	return 0;
}
