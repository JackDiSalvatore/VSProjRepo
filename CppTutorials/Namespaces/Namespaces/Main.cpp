#include <iostream>
// a namespace is a way to determine which program you will be using
// so if you had two programs with similar functions, the namespace
// would differentate which function is which
using namespace std;
//using namespace std::cout;

int main(int argc, char* argv[])
{
	int age;

	// Dont need this anymore
	//std::cout << "Hello World!" << std::endl;
	
	cout << "Hello World" << endl;
	cout << "Enter your age: ";
	cin >> age;
	cout << "You are " << age << " years old" << endl;

	return 0;
}