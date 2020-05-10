#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin;

	string path = "myFile.txt";

	fin.open(path);

	if (fin.is_open())
	{
		cout << "File content:\n\n";

		char ch;
		while (fin.get(ch))
		{
			cout << ch;
		}
		
	}
	else
	{
		cout << "Can't open the file" << endl;
	}

	fin.close();

	/*
		myFile.txt:
			123
			12
			333
			157

		output:

			File content:

			123
			12
			333
			157
	*/

	return 0;
}
