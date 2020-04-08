#include <iostream>
using namespace std;

/*
	array
*/

int main()
{
  setlocale(LC_ALL, "Rus");

  // fill 1
  int arr[2];

  arr[0] = 5;
  arr[1] = 7;

  // fill 2
  int arr2[] = {1, 2, 3}; // 1,2,3

  // fill 3
  int arr3[]{1, 2, 3}; // 1,2,3

  // fill 3.1
  int arr4[2]{1, 2}; // 1,2

  // fill 4
  int arr5[5]{}; // 0,0,0,0,0

  return 0;
}
