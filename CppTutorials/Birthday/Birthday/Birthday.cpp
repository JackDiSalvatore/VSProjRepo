#include <iostream>

#include "Birthday.h"

using namespace std;

Birthday::Birthday(int m, int d, int y)
{
	day = d;
	month = m;
	year = y;
}

int Birthday::printDate()
{
	cout << month << "/" << day << "/" << year << endl;

	return 1;
}