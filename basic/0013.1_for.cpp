#include <iostream>
using namespace std;

/*
	for
*/

int main() {
	setlocale(LC_ALL, "Rus");

	for (int i = 0; i <= 10; i++) {
		cout << "i = " << i << endl;
	}

  int j = 0;
  for(; j < 10; j++) {}

  int k = 0;
  for(; k < 10;) {
   k++;
  }

  // Бесконечный цикл
  // for( ; ; ) {}

  for(int x = 0, y = 10; x < 10; x++, y--) {}

	return 0;
}