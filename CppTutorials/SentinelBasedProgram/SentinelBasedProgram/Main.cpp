#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int age;
	int ageTotal = 0;
	int numOfPeople = 0;
	int avgAge;

	cout << "Enter an age or -1 to quit" << endl;
	cin >> age;

	while (-1 != age)
	{
		ageTotal = +age;
		numOfPeople++;
		avgAge = ageTotal / numOfPeople;

		cout << "Enter another age or -1 to quit" << endl;
		cin >> age;
	}

	cout << "The number of people entered is: " << numOfPeople << endl;
	cout << "The average age is: " << avgAge << endl;

	return 0;
}