#include <iostream>

using namespace std;

class MyClass
{
public:
	int& operator[](int index)
	{
		return arr[index];
	}

private:
	int arr[5]{ 1,2,3,4,5 };
};

int main()
{
	MyClass c1;

	cout << "c1[3] = " << c1[3] << endl; // 4
	c1[3] *= 2;
	cout << "c1[3] = " << c1[3] << endl; // 8

	return 0;
}

