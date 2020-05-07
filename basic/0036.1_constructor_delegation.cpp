#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
	Human(string name)
	{
		this->name = name;
		this->age = 42;
		this->weight = 42;
	}

	Human(string name, int age) : Human(name)
	{
		this->age = age;
	}

	Human(string name, int age, int weight) : Human(name, age)
	{
		this->weight = weight;
	}

	void tellAboutYourself()
	{
		cout << "Name = " + this->name << "\tAge = " + to_string(this->age) << "\tWeight = " << to_string(this->weight) << endl;
	}

private:
	string name;
	int age;
	int weight;
};


int main()
{
	Human petya("Petya");
	Human vasya("Vasya", 37);
	Human alesha("Alesha", 25, 75);

	petya.tellAboutYourself();
	vasya.tellAboutYourself();
	alesha.tellAboutYourself();

	/*
		Name = Petya    Age = 42        Weight = 42  <--- age & weight are default
		Name = Vasya    Age = 37        Weight = 42  <--- weight is default
		Name = Alesha   Age = 25        Weight = 75  <--- no default
	*/

	return 0;
}
