#include <iostream>

using namespace std;

/*
	inline
*/

inline int sum(int a, int b)
{
	return a + b;
}

int main() {
	setlocale(LC_ALL, "Rus");

	/*
		with inline

		sum(1,2) => 1 + 2
	*/

	/*
		without inline

		sum(1,2) => find 'sum' => pass params => compute => result
	*/

	return 0;
}
