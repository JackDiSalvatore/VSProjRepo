#include <iostream>

#include "Mother.h"

using namespace std;

Mother::Mother()
{
	cout << "I am the mother constructor!" << endl;
}


Mother::~Mother()
{
	cout << "I am the mother deconstructor" << endl;
}


void Mother::sayName()
{
	cout << "I am a roberts!" << endl;
}
