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

	bool operator == (const Point &other) {
		return this->x == other.x && this->y == other.y;
	}

	bool operator != (const Point& other) {
		return !(this->x == other.x && this->y == other.y);
	}

private:
	int x;
	int y;
};


int main()
{
	Point a(5, 1);
	Point b(6, 12);
	Point c(5, 1);

	bool equalsA_B = a == b;
	bool equalsA_C = a == c;

	cout << "equals A and B -> " << equalsA_B << endl; // 0
	cout << "equals A and C -> " << equalsA_C << endl; // 1

	bool notEqualsA_B = a == b;
	bool notEqualsA_C = a == c;

	cout << "not equals A and B -> " << notEqualsA_B << endl; // 1
	cout << "not equals A and C -> " << notEqualsA_C << endl; // 0

	return 0;
}

