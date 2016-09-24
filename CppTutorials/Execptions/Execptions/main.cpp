#include <iostream>

using namespace std;

int main()
{
	int motherAge = 34;
	int sonAge = 30;

	try {
		if (sonAge > motherAge)
		{
			throw 1;
		}
	}
	catch (int x)
	{
		cout << "ERROR: " << x << " Sons age can't be older then mothers" << endl;
	}

	return 0;
}