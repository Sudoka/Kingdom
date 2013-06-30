#include "Kingdom.h"

Spearman::Spearman():
	battles_won(0) 
	{}

Spearman::Spearman( int battles_won, int pos ) {
	if ( battles_won < 0 ) {
		throw battlesError();
	}

	this->battles_won = battles_won;
	Warrior::warrior_pos = pos;
}

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