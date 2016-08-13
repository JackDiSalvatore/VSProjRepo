#include <iostream>

#include "Sally.h"

using namespace std;

Sally::Sally()
{
	cout << "I am the constructor" << endl;

}

Sally::~Sally()
{
	cout << "I am the destructor" << endl;
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