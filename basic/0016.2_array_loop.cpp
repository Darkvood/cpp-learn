#include <iostream>
using namespace std;

/*
	array + loop
*/

int main()
{
  setlocale(LC_ALL, "Rus");

  const int SIZE = 5;

  int arr[SIZE]{1, 2, 3, 4, 5};

  for (int i = 0; i < SIZE; i++)
  {
    cout << "Arr - Ind: " << i << " Value: " << arr[i] << endl;
  }

  cout << endl;

  int arr2[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    arr2[i] = 2 * i;

    cout << "Arr2 - Ind: " << i << " Value: " << arr2[i] << endl;
  }

  return 0;
}
