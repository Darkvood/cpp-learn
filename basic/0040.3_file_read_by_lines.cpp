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

		string str;
		while (!fin.eof())
		{
			str = "";
			getline(fin, str);
			cout << str << endl;
		}
		
	}
	else
	{
		cout << "Can't open the file" << endl;
	}

	fin.close();

	/*
		myFile.txt:
			first line
			second line

		output:

			File content:

			first line
			second line

	*/

	return 0;
}
