#include <iostream>

#include "Sally.h"

using namespace std;

int main(int argc, char* argv[])
{
	Sally so(87,3);

	so.print();

	cout << "I am the main body of code" << endl;
	
	const Sally cnstObj(52,3);

	return 0;
}