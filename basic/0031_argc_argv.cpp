#include <iostream>

using namespace std;

/*
	argc, char* argv[]


	# basic foo -bar -bz
	# 0       basic
	# 1       foo
	# 2       -bar
	# 3       -bz

*/

int main(int argc, char* argv[]) {

	for(int i = 0; i < argc; i++) 
	{
		cout << i << "\t" << argv[i] << endl;
	}

	int i;
	cin >> i;

	return 0;
}
