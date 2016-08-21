#include <iostream>

using namespace std;

class Enemy
{
public:
	virtual void attack() = 0;
};


class Ninja : public Enemy
{
public:
	void attack()
	{
		cout << "Ninja attack!" << endl;
	}
};


class Monster : public Enemy
{
public:
	void attack()
	{
		cout << "Monster attack!" << endl;
	}
};


int main(int argc, char* argv[])
{
	Ninja ninja1;
	Monster monster1;

	Enemy *enemy1 = &ninja1;		// enemy1 points to the ninja1 object
	Enemy *enemy2 = &monster1;

	enemy1->attack();
	enemy2->attack();


	return 0;
}