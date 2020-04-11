#include <iostream>

using namespace std;

/*
	function prototype
*/

void Foo(int i);

int main()
{
  setlocale(LC_ALL, "Rus");

  Foo(123);

  return 0;
}

void Foo(int i)
{
  cout << "Foo is called with: " << i << endl;
}