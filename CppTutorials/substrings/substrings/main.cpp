#include <iostream>
#include <string>

using namespace std;


int main()
{
	string s1("The lazy dog jumps over the fence");
	cout << s1.substr(13, 7) << endl;


	/* Swapping, useful for sorting, ie. bubble sort*/
	string strOne("Apples ");
	string strTwo("Beans ");

	cout << strOne << strTwo << endl;
	strOne.swap(strTwo);
	cout << strOne << strTwo << endl;


	string ham("Okay, ham is spam, oh yes I am!!");
	cout << ham.find("am") << endl;
	cout << ham.rfind("am") << endl;	// reverse find

	/**********************************************************/

	string bucky("Hi my name is bucky and I love bacon and ham!");
	cout << bucky << endl;
	bucky.erase(20);
	cout << bucky << endl;
	bucky.replace(14, 5, "Samueal Jackson");
	cout << bucky << endl;
	bucky.insert(14, "lucky ");
	cout << bucky << endl;

	return 0;
}