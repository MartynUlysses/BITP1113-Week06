//Name: MUHAMMAD NAZIRUL AMIN	Matric: B032610181

#include <iostream>
using namespace std;

//function prototype
int getYear(); bool isLeap(int year); void computeWorkDays(bool, int);

//main function
int main() {
	int year; bool status;
	
	year = getYear();
	status = isLeap(year);

	computeWorkDays(status, year);

	return 0;
}

//function definition
int getYear() {
	int year;

	cout << "Enter a year: ";
	cin >> year;

	if (year < 0 || cin.fail()) {
		cout << "!!! INVALID YEAR" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		return getYear();
	}

	return year;
}

bool isLeap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return true;
	else
		return false;
}

void computeWorkDays(bool status, int year) {
	cout << "Working days for " << year << " is ";

	if (status)
		cout << 366 - 52 * 2;
	else 
		cout << 365 - 52 * 2;
	cout << endl;
	return;
}