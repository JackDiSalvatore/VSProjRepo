#include <iostream>

#include "Sally.h"

using namespace std;

int main(int argc, char* argv[])
{
	Sally a(31);
	Sally b(4);
	Sally c;

	c = a + b;
	cout << c.num << endl;
	
	return 0;
}