#include <iostream>
#include <string>

using namespace std;

/*
	oop: class & method
*/

class Human
{
public:
	string name;
	int age;

	void Greet()
	{
		cout << "My name is " << name << ". I am " << age << endl;
	}
};

int main()
{
	Human h1;

	h1.name = "Ivan";
	h1.age = 30;

	h1.Greet();

	cout << "\n------------\n\n";

	Human h2;

	h2.name = "Petya";
	h2.age = 27;

	h2.Greet();

	return 0;
}
