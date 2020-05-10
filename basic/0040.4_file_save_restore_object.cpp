#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}

	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void print()
	{
		cout << "x=" << x << " y=" << y << " z=" << z << endl;
	}

	int x;
	int y;
	int z;
};

int main()
{
	srand(time(NULL));

	string path = "myFile.txt";
	
	fstream file;
	file.open(path, fstream::in | fstream::out | fstream::app); // <-- open: input + output + append

	if(!file.is_open())
	{
		cout << "Can't open the file" << endl;
		return -1;
	}

	Point newPoint(rand() % 20, rand() % 20, rand() % 20);
	
	cout << "Created point: ";
	newPoint.print();
	
	file.write((char*)&newPoint, sizeof(Point));


	cout << "\nRestored: \n";

	file.seekp(0);

	Point tempPoint;
	while (file.read((char*)&tempPoint, sizeof(Point)))
	{
		tempPoint.print();
	}

	file.close();

	return 0;
}
