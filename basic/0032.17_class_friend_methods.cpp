#include <iostream>
#include <string>

using namespace std;

class Apple;

class Human
{
public:
	void takeApple(Apple& apple);
};

class Apple
{
public:
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
	}

	friend void Human::takeApple(Apple& apple);

private:
	int weight;
	string color;
};


int main()
{
	Apple apple(250, "red");
	Human human;

	human.takeApple(apple);

	return 0;
}

void Human::takeApple(Apple& apple)
{
	cout << "Taken " << apple.color << ". Weight = " << apple.weight;
}
