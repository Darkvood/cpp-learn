#include <iostream>
#include <string>

using namespace std;

class Apple
{
public:
	static int Count;

	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
		Apple::Count++;
	}

private:
	int weight;
	string color;
};

int Apple::Count = 0; // init


int main()
{
	Apple a1(150, "red");
	cout << "Created " << Apple::Count << " apple" << endl; // 1

	Apple a2(250, "yellow");
	cout << "Created " << Apple::Count << " apples" << endl; // 2

	Apple a3(240, "green");
	cout << "Created " << Apple::Count << " apples" << endl; // 3

	return 0;
}
