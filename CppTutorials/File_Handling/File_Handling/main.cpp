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

	return 0;
}
