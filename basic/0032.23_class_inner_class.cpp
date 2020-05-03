#include <iostream>
#include <string>

using namespace std;

class Image
{
public:
	void printImageInfo()
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << "pixel #" + to_string(i) << ": " << pixels->getInfo() << endl;
		}
	}

private:
	class Pixel {
	public:
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
	
	static const int SIZE = 5;

	Pixel pixels[SIZE]
	{
		Pixel(15,62,41),
		Pixel(11,22,44),
		Pixel(51,21,45),
		Pixel(61,25,94),
		Pixel(17,92,74)
	};
};

int main()
{
	Image img1;

	img1.printImageInfo();

	return 0;
}
