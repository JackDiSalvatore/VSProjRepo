#include <iostream>

#include "People.h"
#include "Birthday.h"

using namespace std;

People::People(string x, Birthday bo)
	: name(x),
	dateOfBirth(bo)
{

}

int People::printInfo()
{
	cout << name << " was born on ";
	dateOfBirth.printDate();

	return 1;
}