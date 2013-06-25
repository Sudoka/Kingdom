#include <iostream>
#include "Warrior.cpp"

using namespace std;

class Archer: public Warrior
{
public:
	Archer() { battles_won = 0; }
	Archer( int bw, int pos);
	int getBattlesWon() const { return battles_won; }
	void setBattlesWon() { battles_won; }
	virtual void display() const { 
		Warrior::display();
		cout << "Archers: battles won = " << battles_won << endl; 
	}
private:
	int battles_won;
};

Archer::Archer( int battles_won, int pos) {
	Warrior::setWarriorPosition(pos);
	this->battles_won = battles_won;
}