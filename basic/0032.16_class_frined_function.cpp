#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass(int x)
	{
		this->x = x;
	}

	int getX()
	{
		return this->x;
	}

	friend void toggleX(MyClass& value);

private:
	int x;
};

void toggleX(MyClass& value)
{
	value.x *= -1;
}

int main()
{
	MyClass c1(15);

	cout << "c1.x = " << c1.getX() << endl; // 15
	toggleX(c1);
	cout << "c1.x = " << c1.getX() << endl; // -15
	toggleX(c1);
	cout << "c1.x = " << c1.getX() << endl; // 15


	return 0;
}

