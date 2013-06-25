#include "Kingdom.h"

Spearman::Spearman():
	battles_won(0) 
	{}

Spearman::Spearman( int battles_won, int pos ):
	battles_won(battles_won),
	Warrior(pos) 
	{}
// why can't I set Warrior(pos) inside the brackets?

int Spearman::getBattlesWon() const {
	return battles_won;
}

void Spearman::setBattlesWon(int battles) {
	this->battles_won = battles;
}

void Spearman::display() const {
		Warrior::display();
		cout << "Spearmen: battles won = " << battles_won << endl; 
}