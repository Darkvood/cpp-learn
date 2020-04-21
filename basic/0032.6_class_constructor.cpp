#include <iostream>

using namespace std;

/*
	constructor
*/

class Point
{
public:
	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}

	void Log()
	{
		cout << "x: " << x << " y: " << y << endl;
	}

private:
	int x;
	int y;
};


int main()
{
	Point p1(5, 12);
	p1.Log();

	Point p2(44, 72);
	p2.Log();

	return 0;
}
