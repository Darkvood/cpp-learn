#include <iostream>

using namespace std;

/*
	string: pointer
*/

int main() {

	const char* str = "Hello!";

	cout << "str: " << str << endl;

	const char* strArr[] = { "Hello", "world!" };

	return 0;
}
