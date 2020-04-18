#include <iostream>
#define DEBUG

using namespace std;

/*
	preprocessor: conditions

	#ifdef #else #endif #if #elif #endif #ifndef
*/

int main() {

#ifdef DEBUG
	cout << "DEBUG: On" << endl;
#else 
	cout << "DEBUG: Off" << endl;
#endif

	#ifdef DEBUG
		cout << "DEBUG: loop start" << endl;
	#endif // DEBUG

	for (int i = 0; i < 5; i++)
	{
		cout << i << endl;
	}

	#ifdef DEBUG
		cout << "DEBUG: lopp end" << endl;
	#endif 

	return 0;
}
