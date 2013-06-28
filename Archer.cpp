#include "Kingdom.h"

Archer::Archer():
	battles_won(0) 
	{}

Archer::Archer( int battles_won, int pos )
	{
		this->battles_won = battles_won; // this uses -> since it is a pointer
		Warrior::warrior_pos = pos; // since warrior_pos is declated protected in class Warrior we can initialize it.
	}


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