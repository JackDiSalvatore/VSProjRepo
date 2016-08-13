#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char* argv[])
{
	srand(time(0));				// time(0) is ever changing,
								// originating from the time C was created
	for (int nVal = 1; nVal < 25; nVal++)
	{
		cout << 1 + (rand() % 6) << endl;
	}

	return 0;
}