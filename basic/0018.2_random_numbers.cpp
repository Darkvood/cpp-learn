#include <iostream>
#include <ctime>

using namespace std;

/*
	random numbers
*/

int main()
{
  setlocale(LC_ALL, "Rus");

  srand(time(NULL)); // ms after Jan 1, 1970

  int a = rand();

  cout << a << endl;

  a = rand();

  cout << a << endl;

  // with range (5 and 10)

  a = rand() % 5;

  cout << a << endl;

  a = rand() % 10;

  cout << a << endl;

  return 0;
}
