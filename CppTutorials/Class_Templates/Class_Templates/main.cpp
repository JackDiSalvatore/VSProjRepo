#include <iostream>

using namespace std;


template <class T>
class Bucky
{
public:
	Bucky(T a, T b)
	{
		first = a;
		second = b;
	}
	T bigger();

private:
	T first, second;
};


template <class T>
T Bucky<T>::bigger()
{
	return(first > second ? first : second);
}


int main(int argc, char* argv[])
{
	Bucky <int> bo(254,58);

	cout << bo.bigger() << endl;

	return 0;
}