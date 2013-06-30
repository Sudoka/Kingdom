#include "Kingdom.h"

Knight::Knight():
	battles_won(0) 
	{}

Knight::Knight( int battles_won, int pos ) {
	if ( battles_won < 0 ) {
		throw battlesError();
	}

	this->battles_won = battles_won;
	Warrior::warrior_pos = pos;
}

int Knight::getBattlesWon() const {
	return battles_won;
}

void Knight::setBattlesWon(int battles) {
	this->battles_won = battles;
}

void Knight::display() const {
		Warrior::display();
		cout << "Knights: battles won = " << battles_won << endl; 
}
