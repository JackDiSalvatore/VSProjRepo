/* Template Specialization */
#include <iostream>
 
using namespace std;


template <class T>
class Spunky
{
public:
	Spunky(T x)
	{
		cout << x << " is not a character!" << endl;
	}
};


template <>
class Spunky<char>
{
public:
	Spunky(char x)
	{
		cout << x << " is a character!" << endl;
	}
};


int main()
{
	Spunky <int> So(24);
	Spunky <double> So2(25.32);

	Spunky <char> So3('F');
	Spunky <char> So4('z');

	return 0;
}