#include "Kingdom.h"

Knight::Knight():
	battles_won(0) 
	{}

Knight::Knight( int battles_won, int pos ):
	battles_won(battles_won),
	Warrior(pos) 
	{}
// why can't I set Warrior(pos) inside the brackets?

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
