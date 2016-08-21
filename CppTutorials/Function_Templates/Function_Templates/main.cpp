#include <iostream>

using namespace std;

template <class bucky>
bucky addCrap(bucky a, bucky b)
{
	return a + b;
}

int main(int argc, char* argv[])
{
	int x = 7, y = 53, z;
	
	z = addCrap(x, y);
	cout << z << endl;

	return 0;
}