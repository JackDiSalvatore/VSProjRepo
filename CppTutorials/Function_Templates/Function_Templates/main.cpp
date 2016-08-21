#include <iostream>

using namespace std;

template <class bucky>
bucky addCrap(bucky a, bucky b)
{
	return a + b;
}


template <class F, class S>
F smaller(F a, S b)
{
	return (a < b ? a : b);
}


int main(int argc, char* argv[])
{
	int x = 7, y = 53, z;
	int w = 150;
	double q = 45.76;
	
	z = addCrap(x, y);
	cout << z << endl;

	cout << smaller(q, w) << endl;

	return 0;
}