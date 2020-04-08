#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	const int DAYS_OF_WEEK = 7;
	const char NEWL = '\n';
	const bool DEBUG = false;

	cout << DAYS_OF_WEEK << NEWL << "Debug: " << DEBUG;

	// Ошибка: знание константы неизменяемо
	// DEBUG = true;

	return 0;
}