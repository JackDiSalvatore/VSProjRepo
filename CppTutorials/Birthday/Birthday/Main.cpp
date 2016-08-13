#include <iostream>
#include <assert.h>

#include "People.h"
#include "Birthday.h"

using namespace std;

int main(int argc, char* argv[])
{
	Birthday joeBday(12, 5, 2016);

	People Joe("Joe", joeBday);
	assert(1 == Joe.printInfo(), "Fail");


	return 0;
}