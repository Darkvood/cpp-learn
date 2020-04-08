#include <iostream>

using namespace std;

/*
	array + find min number
*/


int main() {
	setlocale(LC_ALL, "Rus");

	int arr[]{ 8,3,5,12,55 };

	int min = arr[0];

	for (int i = 1; i < sizeof(arr) / sizeof(int); i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
	}

	cout << "Min number is " << min << endl;

	return 0;
}
