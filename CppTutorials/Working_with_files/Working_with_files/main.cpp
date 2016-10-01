#include <iostream>
#include <string>
#include <fstream>

using namespace std;

enum userOptions
{
	PLAIN_ITEM = 1,
	HELPFUL_ITEM = 2,
	HARMFUL_ITEM = 3,
	QUIT = 4
};

int getUserInput()
{
	int userInput;

	cout << "\nPress" << endl;
	cout << "1 - for plain items" << endl;
	cout << "2 - for helpful items" << endl;
	cout << "3 - for harmful items" << endl;
	cout << "4 - to quit program\n" << endl;

	cin >> userInput;
	return userInput;
}

void display(int askingInfo)
{
	ifstream fileOb("objects.txt");	// input stream file object

	string name;
	int power;


	if (1 == askingInfo)
	{
		while (fileOb >> name >> power)
		{
			if (0 == power) {
				cout << name << " " << power << endl;
			}
		}
	}
	else if (2 == askingInfo)
	{
		while (fileOb >> name >> power)
		{
			if (0 < power)
			{
				cout << name << " " << power << endl;
			}
		}
	}
	else if (3 == askingInfo)
	{
		while (fileOb >> name >> power)
		{
			if (0 > power)
			{
				cout << name << " " << power << endl;
			}
		}
	}

}

int main()
{
	int input;

	input = getUserInput();

	while (input != 4)
	{
		switch (input)
		{
		case PLAIN_ITEM:
			display(input);
			break;
		case HELPFUL_ITEM:
			display(input);
			break;
		case HARMFUL_ITEM:
			display(input);
			break;
		}

		input = getUserInput();
	}

	return 0;
}