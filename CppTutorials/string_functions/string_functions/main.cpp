#include <iostream>
#include <string>

using namespace std;


int main()
{
	string name;

	string s1("Hampster");		// different constructor syntax
	string s2;
	string s3;
	string s4 = "omgwtfpoopy";

	s2 = s1; 
	s3.assign(s1);

	cout << s4.at(3) << " = " << s4[3] << endl;

	for (int x = 0; x < s4.length(); x++)
	{
		cout << s4.at(x);
	}

	cout << "\n";

	//getline(cin, name);
	cin >> name;
	cout << "My name is: " << name << endl;

	return 0;
}