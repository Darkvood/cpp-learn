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

	// prefix
	Point& operator ++()
	{
		this->x++;
		this->y++;

		return *this;
	}

	// postfix
	Point& operator ++(int value)
	{
		Point temp(*this);

		this->x++;
		this->y++;

		return temp;
	}

	void PrintDetails()
	{
		cout << "x: " << x << " y: " << y << endl;
	}

private:
	int x;
	int y;
};


int main()
{
	Point a(5, 5);

	a.PrintDetails(); // x: 5 y: 5
	++a;
	a.PrintDetails(); // x: 6 y: 6

	Point b = a++;
	b.PrintDetails(); // x: 6 y: 6


	return 0;
}

