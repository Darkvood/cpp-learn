#include <iostream>
#include <string>

using namespace std;

/*
	class & object
*/

class Human
{
public:
	string name;
	int age;
};

class Point
{
public:
	int x;
	int y;
	int z;
};

int main()
{
	Human h1;

	h1.name = "Ivan";
	h1.age = 30;

	cout << h1.name << endl;
	cout << h1.age << endl;

	cout << "\n------------\n\n";

	Human h2;

	h2.name = "Petya";
	h2.age = 27;

	cout << h2.name << endl;
	cout << h2.age << endl;

	cout << "\n------[ Point ]------\n\n";

	Point p1;

	p1.x = 3;
	p1.y = 4;
	p1.z = 5;

	cout << "X: " << p1.x << endl;
	cout << "Y: " << p1.y << endl;
	cout << "Z: " << p1.z << endl;

	return 0;
}
