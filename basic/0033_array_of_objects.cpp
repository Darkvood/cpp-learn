#include <iostream>
#include <string>

using namespace std;

class Pixel {
public:
	Pixel()
	{
		r = g = b = 0;
	}

	Pixel(int r, int g, int b)
	{
		this->r = r;
		this->g = g;
		this->b = b;
	}

	string getInfo()
	{
		return "r: " + to_string(r) + " g: " + to_string(g) + " b: " + to_string(b);
	}

private:
	int r;
	int g;
	int b;
};

int main()
{
	const int SIZE = 5;

	Pixel pixels[SIZE]
	{
		Pixel(10,20,30)
	};

	cout << "First: " << pixels[0].getInfo() << endl;
	cout << "Second: " << pixels[1].getInfo() << endl;

	return 0;
}
