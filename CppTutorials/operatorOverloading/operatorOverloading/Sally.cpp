#include <iostream>

#include "Sally.h"

using namespace std;

Sally::Sally()
{

}

Sally::Sally(int a)
{
	num = a;
}

Sally Sally::operator+(Sally aso)
{
	Sally brandNew;
	// num is the value of the current object
	// brandNew is the newly created object after the addition
	brandNew.num = num + aso.num;

	return(brandNew);
}