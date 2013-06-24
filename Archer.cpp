#include <iostream>
#include "Warrior.cpp"

using namespace std;

class Archer: public Warrior
{
public:
	Archer() { battles_won = 0; }
	~Archer() {};
	int getBattlesWon() const { return battles_won; }
	void setBattlesWon() { battles_won; }
	virtual void display() const { cout << "Archers: battles won = " << battles_won << endl; }
private:
	int battles_won;
};