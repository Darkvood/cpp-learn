#include <iostream>

using namespace std;

/*
	string: own strlen
*/

int strLength(const char* str)
{
	int length = 0;
	
	while (str[length] != '\0')
	{
		length++;
	}

	return length;
}

int main() {

	const char* str1 = "Hello";
	const char* str2 = "World!";

	cout << "string: \"" << str1 << "\" len: " << strLength(str1) << endl;
	cout << "string: \"" << str2 << "\" len: " << strLength(str2) << endl;
	cout << "Empty string len: " << strLength("") << endl;

	return 0;
}
