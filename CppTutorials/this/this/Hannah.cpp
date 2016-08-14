#include <iostream>

#include "Hannah.h"

using namespace std;

Hannah::Hannah(int num)
	: h(num)
{

}

void Hannah::printCrap()
{
	// normal way
	cout << "h = " << h << endl;

	// this is a pointer that points to the address of the current object
	cout  << "this->h = " << this->h << endl;
	
	// derefferences this current object and gets h's value
	cout << "(*this).h = " << (*this).h << endl;
}