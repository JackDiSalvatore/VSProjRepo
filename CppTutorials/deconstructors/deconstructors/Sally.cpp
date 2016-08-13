#include <iostream>

#include "Sally.h"

using namespace std;

Sally::Sally(int a, int b)
	: regVar(a),
	cnstVar(b)
{
	cout << "I am the constructor" << endl;

}

Sally::~Sally()
{
	cout << "I am the destructor" << endl;
}

void Sally::print()
{
	cout << "Regular variable is: " << regVar
		<< " Consant variable is: " << cnstVar << endl;

	return;
}

void Sally::printShiz()
{
	cout << "I am a regualar function" << endl;

	return;
}

void Sally::printShiz2() const
{
	cout << "I am a constant funtion" << endl;
}