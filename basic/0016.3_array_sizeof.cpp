#include <iostream>
using namespace std;

/*
	array + sizeof
*/

int main()
{
  setlocale(LC_ALL, "Rus");

  int arr[]{10, 20, 30, 40};

  cout << "sizeof(arr): " << sizeof(arr) << endl;
  cout << "sizeof(arr) / sizeof(int): " << sizeof(arr) / sizeof(int) << endl
       << endl;

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    cout << "Array #1. Ind: " << i << " Value: " << arr[i] << endl;
  }

  cout << "\n\n";

  double arr2[]{10, 20, 30, 40};

  cout << "sizeof(arr2): " << sizeof(arr2) << endl;
  cout << "sizeof(arr2) / sizeof(arr2[0]): " << sizeof(arr2) / sizeof(arr2[0]) << endl
       << endl;

  for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
  {
    cout << "Array #2. Ind: " << i << " Value: " << arr[i] << endl;
  }

  return 0;
}
