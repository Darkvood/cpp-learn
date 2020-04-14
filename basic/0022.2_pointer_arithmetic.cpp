#include <iostream>

using namespace std;

/*
	pointer arithmetic
*/

int main() {
	setlocale(LC_ALL, "Rus");

	const int SIZE = 5;
	int arr[SIZE] = { 10,20,30,40,50 };

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "\n============\n";

	// without '&'. The array's name is reference to first element
	int* pArr = arr; 

	cout << "arr\t" << arr << endl;
	cout << "pArr\t" << pArr << endl;

	cout << "\n============\n";

	for (int i = 0; i < SIZE; i++)
	{
		cout << pArr[i] << endl;
	}

	cout << "\n\n============\n\n";

	cout << "First element\t"
		 << "address: " << arr 
		 << "\tvalue: " << *arr << endl;

	cout << "Second element\t" 
		 << "address: " << (arr + 1)  // (arr + 1) = (address_first_element + size_type_of_array * 1)
		 << "\tvalue: " << *(arr + 1) << endl;

	cout << "Third element\t" 
		 << "address: " << (arr + 2) // (arr + 2) = (address_first_element + size_type_of_array * 2)
		 << "\tvalue: " << *(arr + 2) << endl;

	return 0;
}
