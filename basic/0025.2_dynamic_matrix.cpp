#include <iostream>

using namespace std;

/*
	dynamic memory: matrix
*/

int main() {
	setlocale(LC_ALL, "Rus");

	int rows = 5;
	int cols = 6;

	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	// fill + output
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20;

			cout << "i: " << i << " j: " << j;
			cout << "\tAddress: " << arr[i] + j;
			cout << "\tValue: " << arr[i][j] << endl;
		}

		cout << endl;
	}

	// clear
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;

	return 0;
}
