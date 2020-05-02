#include <iostream>
#include <string>

using namespace std;

class Apple;

class Human
{
public:
	void takeApple(Apple& apple);
	void eatApple(Apple& apple);
};

class Apple
{
public:
	friend Human;

	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
	}

private:
	int weight;
	string color;
};


int main()
{
	Apple apple(250, "red");
	Human human;

	human.takeApple(apple);
	human.eatApple(apple);

	return 0;
}

void Human::takeApple(Apple& apple)
{
	cout << "Taken " << apple.color << ". Weight = " << apple.weight << endl;
}

void Human::eatApple(Apple& apple)
{
	cout << "Eat " << apple.color << ". Weight = " << apple.weight << endl;
}