#include <iostream>

using namespace std;

/*
	two-dimensional array
*/


int main() {
	setlocale(LC_ALL, "Rus");

	const int ROWS = 2;
	const int COLS = 4;

	int arr[ROWS][COLS]{}; // all 0

	int arr2[][COLS] // rows can be undefined
	{
		{ 11, 12, 13, 14 },
		{ 21, 22 } // line is optional &  two last element = 0
	};

	return 0;
}
