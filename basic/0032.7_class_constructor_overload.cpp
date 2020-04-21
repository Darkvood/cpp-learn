#include <iostream>

using namespace std;

/*
	constructor overload
*/

class Point
{
public:
	Point()
	{
		x = 0;
		y = 0;
	}

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
	Point p1; 
	p1.Log(); // 0 0

	Point p2(5, 12);
	p2.Log(); // 5 12

	return 0;
}
