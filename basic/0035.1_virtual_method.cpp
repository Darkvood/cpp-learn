#include <iostream>

using namespace std;

class Gun
{
public:
	virtual void shoot()
	{
		cout << "bang!" << endl;
	}
};

class SubmachineGun : public Gun
{
public:
	void shoot() override
	{
		cout << "bang! bang! bang!" << endl;
	}
};

class Player {
public:
	void shoot(Gun* gun)
	{
		gun->shoot();
	}
};

int main()
{
	Gun g1;
	SubmachineGun sg1;

	g1.shoot(); // bang!
	sg1.shoot(); // bang! bang! bang!

	cout << endl << endl;

	Player p1;

	p1.shoot(&g1); // bang!
	p1.shoot(&sg1); // bang! bang! bang!

	return 0;
}
