#include <iostream>
#include <string>

using namespace std;

class A
{
public:
	string msg1 = "str 1";

private:
	string msg2 = "str 2";

protected:
	string msg3 = "str 3";
};

class B : public A 
{
public:
	void printMsg()
	{
		cout << msg1 << endl; // ok
		//cout << msg1 << endl; - error
		cout << msg3 << endl; // ok

	}

};


int main()
{
	B b1;

	// b1 => msg1 | printMsg

	b1.printMsg();

	return 0;
}
