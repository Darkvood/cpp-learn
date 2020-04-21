#include <iostream>

using namespace std;

/*
	this
*/

class World
{
public:
	World(int size) {
		this->size = size;

		cout << "[" << this << "] World created! Size = " << this->size << endl;

		this->doSomething();
	}

	void doSomething() {
		cout << "[" << this << "] Living...\n\n";
	}

private:
	int size;
};


int main()
{
	World w1(15);
	World w2(27);

	return 0;
}

