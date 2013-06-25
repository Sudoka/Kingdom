#include "Kingdom.h"

Archer::Archer():
	battles_won(0) 
	{}

Archer::Archer( int battles_won, int pos ):
	battles_won(battles_won),
	Warrior(pos) 
	{}
// why can't I set Warrior(pos) inside the brackets?

int Archer::getBattlesWon() const {
	return battles_won;
}

void Archer::setBattlesWon(int battles) {
	this->battles_won = battles;
}

void Archer::display() const {
		Warrior::display();
		cout << "Archers: battles won = " << battles_won << endl; 
}