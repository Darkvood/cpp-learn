#include <iostream>
#include <ctime>

using namespace std;

/*
	random numbers + array
*/

int main()
{
  setlocale(LC_ALL, "Rus");
  srand(time(NULL));

  const int SIZE = 5;

  int arr[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    arr[i] = rand() % 15;
    cout << "Ind: " << i << " Value: " << arr[i] << endl;
  }

  return 0;
}
