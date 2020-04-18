#include <iostream>
#include <string>

using namespace std;

/*
	function pointer
*/

string GetDataFromDB()
{
	return "Data From DB";
}

string GetDataFromWebServer()
{
	return "Data From WebServer";
}

void ShowInfo(string (*getData)())
{
	cout << "On screen: " << getData() << endl;
}

int main() {

	ShowInfo(GetDataFromDB);
	ShowInfo(GetDataFromWebServer);

	return 0;
}
