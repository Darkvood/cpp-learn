#include <iostream>
#include <string>

using namespace std;

class Human {
public:
	string name;
};

class Student : public Human
{
public:
	string group;

	void learn() {
		cout << "learn at university" << endl;
	};
};

class ExtramuralStudent : public Student
{
public:
	string group;

	void learn() {
		cout << "learn at home" << endl;
	};
};

class Teacher : public Human
{
public:
	string subject;
};

int main()
{
	Student st;
	ExtramuralStudent st2;
	
	Teacher tc;

	// st => name | group | learn()
	st.learn(); // learn at university

	// st2 => name | group | learn()
	st2.learn(); // learn at home

	// tc => name | subject
  
	return 0;
}
