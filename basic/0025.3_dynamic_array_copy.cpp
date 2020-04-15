#include <iostream>

using namespace std;

/*
	dynamic memory: copy array
*/

void FillArray(int* const arr, const int size)
{
	for (int j = 0; j < size; j++)
	{
		arr[j] = rand() % 20;
	}
}

void ShowArray(const int* const arr, const int size)
{
	for (int j = 0; j < size; j++)
	{
		cout << arr + j << "\t" << arr[j] << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Rus");

	int size = 10;

	int* firstArray = new int[size];
	int* secondArray = new int[size];

	FillArray(firstArray, size);
	FillArray(secondArray, size);

	ShowArray(firstArray, size);
	cout << endl;
	ShowArray(secondArray, size);

	delete[] firstArray;

	firstArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		firstArray[i] = secondArray[i];
	}

	cout << "\n\n========= Copied =========\n\n";

	ShowArray(firstArray, size);
	cout << endl;
	ShowArray(secondArray, size);

	delete[] firstArray;
	delete[] secondArray;

	return 0;
}
