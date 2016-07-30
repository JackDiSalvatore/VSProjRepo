#include <iostream>
#include <string>
using namespace std;

class BuckyClass
{
public:
	BuckyClass(string z)
	{
		setName(z);
	}
	void setName(string x)
	{
		name = x;
	}
	string getName()
	{
		return name;
	}
private:
	string name;

};

int main(int argc, char* argv[])
{
	BuckyClass bo("Bucky Roberts");
	cout << bo.getName() << endl;

	BuckyClass bo2("Sally McSalad");
	cout << bo2.getName() << endl;

	return 0;
}