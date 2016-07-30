#include <iostream>
using std::cout;
using std::endl;

class Person
{
public:
	int age;
	char gender;
};

int main(int argc, char* argv[])
{
	Person* p = new Person;			// allocates new person on the heap
	p->age = 20;
	(*p).age = 30;	// ^ both syntaxes are the same
	cout << p->age << endl;
	cout << (*p).age << endl;
	delete p;
}