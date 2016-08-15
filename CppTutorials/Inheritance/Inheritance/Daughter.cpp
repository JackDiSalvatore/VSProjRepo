#include <iostream>

#include "Daughter.h"

using namespace std;

Daughter::Daughter()
{
	cout << "I am the daughter constructor" << endl;
}

Daughter::~Daughter()
{
	cout << "I am the daughter deconstructer" << endl;
}

void Daughter::doSomething()
{
	pubVar = 1;
	protVar = 2;
	// can not do
	// priVar = 3

	cout << "Success" << endl;
}