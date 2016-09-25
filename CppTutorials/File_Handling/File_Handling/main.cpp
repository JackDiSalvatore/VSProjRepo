#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream buckyFile;

	buckyFile.open("tuna.txt");

	buckyFile << "I love tuna and tuna loves me!\nHere is a new line" << endl ;
	buckyFile << "Next line of text here";

	buckyFile.close();


	ofstream jeffFile("beef-jerky.txt");

	if (!jeffFile.is_open())
	{
		cout << "File is not open man" << endl;
	}
	else
	{
		cout << "File is open" << endl;
	}

	jeffFile << "I love the beef\n";

	jeffFile.close();

	return 0;
}
