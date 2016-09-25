#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream theFile("players.txt");

	int id;
	string name;
	double money;

	while (theFile >> id >> name >> money)
	{
		cout << id << " " << name << " " << money << endl;
	}

	//theFile.close();
	// don't need beacuse when while loop reaches the EOF it
	// will automatically call its deconstructor which closes
	// the file

}