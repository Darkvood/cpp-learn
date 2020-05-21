#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);

	try
	{
		cout << "before open" << endl;

		fin.open("the file is not exists");

		cout << "after open"; // <-- unreachable code
	}
	catch (const ifstream::failure& ex)
	{
		cout << "Err code: " << ex.code() << endl;
		cout << "What: " << ex.what() << endl;
	}

	/*
		before open
		Err code: iostream:1
		Err: ios_base::failbit set: iostream stream error
	*/

	return 0;
}
