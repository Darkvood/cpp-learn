#include <iostream>

using namespace std;

/*
	random numbers
*/

int main()
{
  setlocale(LC_ALL, "Rus");

  int a = rand();

  cout << a << endl;

  a = rand();

  cout << a << endl;

  // a == a ALL TIME

  return 0;
}
