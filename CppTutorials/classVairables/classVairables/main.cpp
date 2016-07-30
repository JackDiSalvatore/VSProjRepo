#include <iostream>
#include <string>
using namespace std;

class BuckyClass
{
public:
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
	BuckyClass bo;
	bo.setName("Jessica");
	cout << bo.getName();

	return 0;
}