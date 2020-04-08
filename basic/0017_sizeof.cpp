#include <iostream>
using namespace std;

/*
	sizeof
*/

int main()
{
  setlocale(LC_ALL, "Rus");

  cout << "Int: " << sizeof(int) << endl;
  cout << "Float: " << sizeof(float) << endl;
  cout << "Double: " << sizeof(double) << endl;
  cout << "Char: " << sizeof(char) << endl;
  cout << "Bool: " << sizeof(bool) << endl;

  cout << endl
       << endl;

  int a;
  float b;
  double c;
  char d;
  bool e;

  cout << "Int var: " << sizeof(a) << endl;
  cout << "Float var: " << sizeof(b) << endl;
  cout << "Double var: " << sizeof(c) << endl;
  cout << "Char var: " << sizeof(d) << endl;
  cout << "Bool var: " << sizeof(e) << endl;

  /*
    Int: 4
    Float: 4
    Double: 8
    Char: 1
    Bool: 1
  */

  return 0;
}
