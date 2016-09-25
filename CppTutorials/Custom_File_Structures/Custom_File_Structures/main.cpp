#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream playerFile("players.txt");

	cout << "Enter player ID, Name, and Money: \n";
	cout << "Press Ctrl+Z to quit" << endl;

	uint16_t playerId;
	string playerName;
	double money;

	while (cin >> playerId >> playerName >> money)
	{
		playerFile << playerId << " " << playerName << " " << money << endl;
	}

	playerFile.close();

	return 0;
}