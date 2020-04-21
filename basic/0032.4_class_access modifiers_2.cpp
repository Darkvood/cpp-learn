#include <iostream>

using namespace std;

/*
  getter & setter
*/

class CoffeeGrinder
{
public:
	void Start()
	{
		if (CheckVoltage())
		{
			cout << "VjuHH!!" << endl;
		}
		else
		{
			cout << "Beep Bepp!" << endl;
		}
	}

private:
	bool CheckVoltage()
	{
		return true; // false hardcode
	}
};

int main()
{
	CoffeeGrinder cg1;

	cg1.Start();

	return 0;
}
