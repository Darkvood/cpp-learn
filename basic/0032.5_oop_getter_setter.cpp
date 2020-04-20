#include <iostream>

using namespace std;

/*
	oop: getter & setter
*/

class Point
{
public:
	int GetX()
	{
		return x;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}

	int GetY()
	{
		return x;
	}

	void SetY(int valueY)
	{
		y = valueY / 2;
	}

	void Log()
	{
		cout << "X = " << x << "\tY = " << y << endl << endl;
	}

private:
	int x;
	int y;
};

int main()
{
	Point p1;

	p1.SetX(42);
	p1.SetY(100);

	p1.Log();

	return 0;
}
