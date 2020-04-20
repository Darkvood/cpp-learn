#include <iostream>

using namespace std;

/*
	oop: access modifiers

	default - private
*/

class Cam
{
public:
	int x;
	int y;

	void log()
	{
		cout << "x: " <<  x << " y: " << y << " z: " << z << " o: " << o << endl;

		// 'z', 'o', 'privateAction' - available

	}

private:
	int z = 2;
	void privateAction() {};

protected:
	double o = 0.7;
};

int main()
{
	Cam c1;

	c1.x = 10;
	c1.y = 15;

	c1.log();


	return 0;
}
