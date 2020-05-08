#include <iostream>
#include <string>

using namespace std;

class Message {
public:
	Message(string message)
	{
		this->message = message;
	}

	virtual string getMessage()
	{
		return this->message;
	}

private:
	string message;
};

class BreakingMessage : public Message
{
public: 
	BreakingMessage(string message) : Message(message) {}

	string getMessage() override {
		return ::Message::getMessage() + "!!!"; // <-- call parent method
	}
};

class Printer
{
public:
	static void print(Message* msg)
	{
		cout << msg->getMessage() << endl;
	}
};

int main()
{
	Message usualMessage("Hello");
	BreakingMessage warningMessage("IT ISN'T WORK");

	Printer::print(&usualMessage); // Hello
	Printer::print(&warningMessage); // IT ISN'T WORK!!!

	return 0;
}
