#include <iostream>

using namespace std;

class Enemy 
{
public:
	void setAttackPower(int a)
	{
		attackPower = a;
	}
protected:		// protected var's can be inherited
	int attackPower;
};


class Ninja : public Enemy 
{
public:
	void attack()
	{
		cout << "Ninja attack! -" << attackPower << endl;
	}
};


class Monster : public Enemy
{
public:
	void attack()
	{
		cout << "Monster attack! -" << attackPower << endl;
	}
};


int main(int argc, char* argv[])
{
	Ninja ninja1;
	Monster monster1;
	Enemy* enemy1 = &ninja1;		// enemy1 points to the address of ninja
	Enemy* enemy2 = &monster1;		// enemy2 points to the address of monster
									/* enemy's can point to ninja/monster
									because ninja/monster have everything that 
									enemy does (enemy does not have everything
									ninja/monster does).  The inherited classes
									are more specific versions of the base class*/
	enemy1->setAttackPower(29);
	enemy2->setAttackPower(34);
	
	ninja1.attack();				// cant use enemy1 because its a type of Enemy
	monster1.attack();				// Enemy class does not have attack func
									// virtual members will make this easier!	
	return 0;	
}