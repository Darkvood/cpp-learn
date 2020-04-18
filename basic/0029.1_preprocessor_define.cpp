#include <iostream>

#define PI 3.14
#define say cout<< // soo bad but it's work
#define FOO(x,y) ((x)*(y)) // macros

// define can all

using namespace std;

/*
	preprocessor
*/

int main() {

	cout << "PI: " << PI << endl;

	say "Hello\n";

	cout << "5 * 5 = " << FOO(5, 5) << endl;

	return 0;
}
