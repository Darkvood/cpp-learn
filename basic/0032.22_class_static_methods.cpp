#include <iostream>
#include <string>

using namespace std;

class Human
{
public:

	Human(string name)
	{
		this->id = ++maxId;
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

	static int getMaxId()
	{
		// 'this' is undefined
		return maxId;
	}

	static string getNameByStaticMethod(Human &h)
	{
		return h.getName();
	}

private:
	static int maxId;

	int id;
	string name;
};

int Human::maxId = 0;


int main()
{
	Human h1("Petya");
	Human h2("Vasya");
	Human h3("Alesha");

	cout << "h1: name = " << h1.getName() << " / id = " << h1.getId() << endl;
	cout << "h2: name = " << h2.getName() << " / id = " << h2.getId() << endl;
	cout << "h3: name = " << h3.getName() << " / id = " << h3.getId() << endl;

	cout << "MaxID = " << Human::getMaxId() << endl << endl;

	cout << "H1: name" << Human::getNameByStaticMethod(h1) << endl;


	return 0;
}
