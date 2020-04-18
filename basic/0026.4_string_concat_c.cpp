#include <iostream>

using namespace std;

/*
	string: С - concatenation
*/

int main() {
	char str1[255] = "Hello";
	char str2[255] = " World";

	cout << "str1: " << str1 << endl;

	strcat_s(str1, str2); // (!) change first arg

	cout << "str1: " << str1 << endl;

	return 0;
}
