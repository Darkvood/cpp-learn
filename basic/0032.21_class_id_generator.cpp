#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
	static int Count;

	Human(string name)
	{
		this->id = ++Human::Count;
		this->name = name;
	}

	int getId()
	{
		return this->id;
	}

	string getName()
	{
		return this->name;
	}

private:
	int id;
	string name;
};

int Human::Count = 0;


int main()
{
	Human h1("Petya");
	Human h2("Vasya");
	Human h3("Alesha");

	cout << "h1: name = " << h1.getName() << " / id = " << h1.getId() << endl;
	cout << "h2: name = " << h2.getName() << " / id = " << h2.getId() << endl;
	cout << "h3: name = " << h3.getName() << " / id = " << h3.getId() << endl;

	return 0;
}
