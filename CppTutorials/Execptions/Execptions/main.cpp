#include <iostream>

using namespace std;

int main()
{
	int motherAge = 34;
	int sonAge = 30;

	try
	{
		if (sonAge > motherAge)
		{
			throw 1;
		}
	}
	catch (int x)
	{
		cout << "ERROR: " << x << " Sons age can't be older then mothers" << endl;
	}


	try
	{
		int num1;
		cout << "Enter first number: " << endl;
		cin >> num1;

		int num2;
		cout << "Enter second number: " << endl;
		cin >> num2;

		if (0 == num2)
		{
			throw 0;
		}
		else
		{
			cout << num1 / num2 << endl;
		}
	}
	// ... is used the catch any error message that could possibly be thrown above
	// this is usefully if you have multiple throws that could be caught
	catch (...)
	{
		cout << "You can't divide by zero!" << endl;
	}

	return 0;
}