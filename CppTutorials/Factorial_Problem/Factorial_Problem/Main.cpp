#include <iostream>
#include <string>

using namespace std;

// n! = n(n-1)

int old_factorial(int numToFac)
{
	static int numFac;
	static int i;

	for (i = 0; i < numToFac; i++)
	{
		numFac = numToFac*(numToFac - 1);
		return old_factorial(numFac);
	}
}

/*
	DOESN'T WORK

	put in 4
	i = 0, 4(4-1) = 12
	i = 1, 12(12-1) =
	i = 2, 
	i = 3,
	i = 4, stop
*/

/*
	a! = a1(a1-1) * (a2-1) * (a3-1)
	
	a! = a1(a1-1) * (a1-2) * (a1-3) ...
*/

int factorial(int num)
{
	int firstIndex = 0;
	int secIndex = 1;
	int ans;

	ans = (num - firstIndex) * (num - secIndex);

	while (secIndex != num-1)
	{
		secIndex++;
		ans *= (num - secIndex);
	}

	return ans;
}

bool isPalindrome(char* palindromeStr)
{
	for (int i = 0; i < strlen(palindromeStr) - 1; i++)
	{
		if (palindromeStr[i] != palindromeStr[strlen(palindromeStr) - i - 1])	// -1 for NULL terminator
		{
			return false;
		}
	}

	return true;
}

int main()
{

	//cout << factorial(2) << endl;

	if (isPalindrome("mrowlatemymetalworm"))
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}


	return 0;
}
