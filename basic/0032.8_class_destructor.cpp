#include <iostream>

using namespace std;

/*
	destructor
*/

class World
{
public:
	World(int size)
	{
		count = size;
		data = new int[size];

		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}

		cout << "World created!" << endl;
	}

	~World()
	{
		delete[] data;

		cout << "World destroyed :(" << endl;
	}

	void show()
	{
		for (int i = 0; i < count; i++)
		{
			cout << data[i] << endl;
		}
	}

private:
	int count;
	int* data;
};


int main()
{
	{
		World w1(5);
		w1.show();
	} // end of the scope + call destructor

	return 0;
}

/*

World created!
0
1
2
3
4
World destroyed :(

*/