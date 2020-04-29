#include <iostream>

using namespace std;

class Point
{
public:
	Point (int x, int y) 
	{
		this->x = x;
		this->y = y;
	}

	Point operator + (const Point &other) {
		int x = this->x + other.x;
		int y = this->y + other.y;

		return Point(x, y);
	}

private:
	int x;
	int y;
};


int main()
{
	Point a(5, 1);
	Point b(6, 12);

	Point c = a + b; // x: 11 y: 13

	return 0;
}

