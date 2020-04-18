#include <iostream>

using namespace std;

/*
	string as array of chars
*/

int main() {

	char str1[] = "Hello world!";
	char str2[] = { 'H', 'e', 'l','l','o', '\0' }; // zero terminated - \0

	cout << "string 1: " << str1 << " len: " << strlen(str1) << endl;
	cout << "string 2: " << str2 << " len: " << strlen(str2) << endl;

	return 0;
}
