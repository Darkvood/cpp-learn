#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ofstream fout;

	string path = "myFile.txt";

	//fout.open(path); // <-- open to rewrite
	fout.open(path, ofstream::app); // <-- open to append

	if (fout.is_open())
	{
		cout << "Input your number: ";

		int number;
		cin >> number;

		fout << "My number = " << number << "\n";
		
		cout << "Ok!" << endl;
	}
	else
	{
		cout << "Can't open the file" << endl;
	}

	fout.close();

	/*
		myFile.txt:

			My number = {number}
	*/

	return 0;
}
