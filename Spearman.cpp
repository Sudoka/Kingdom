#include <iostream>
#include "Warrior.cpp"

using namespace std;

class Spearman
{
public:
	Spearman() { battles_won = 0; }
	~Spearman() {};
	int getBattlesWon() const { return battles_won; }
	void setBattlesWon() { battles_won; }
	virtual void display() const { cout << "Spearmen: battles won = " << battles_won << endl; }
private:
	int battles_won;
};