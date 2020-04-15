#include <iostream>

using namespace std;

/*
	dynamic memory: array
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int size;

	cout << "Array size: ";
	cin >> size;

	int* arr = new int[size];

	for(int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr + i << "\t" << arr[i]<< endl;
	}

	delete [] arr;

	return 0;
}
