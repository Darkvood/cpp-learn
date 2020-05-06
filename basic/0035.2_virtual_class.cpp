#include <iostream>
#include <string>

using namespace std;

class Weapon // <-- abstract class
{
public:
	void printName()
	{
		cout << "Weapon: " << name << endl;
	}

	virtual void use() = 0; // <-- abstract method
  
protected:
	string name;
};

class Gun :public Weapon
{
public:
	Gun()
	{
		name = "Gun";
	}

	void use() override
	{
		cout << "bang" << endl;
	}
};

class Knife :public Weapon
{
public:
	Knife()
	{
		name = "Knife";
	}

	void use() override
	{
		cout << "vjuh!" << endl;
	}
};

class Player {
public:
	void use(Weapon* weapon)
	{
		weapon->use();
	}
};


int main()
{
	Gun gun;
	Knife knife;

	Player player;

	gun.printName(); // Weapon: Gun
	player.use(&gun); // bang

	cout << endl << endl;

	knife.printName(); // Weapon: Knife
	player.use(&knife); // vjuh!

	return 0;
}
