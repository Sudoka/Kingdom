#include "Kingdom.h"

// enum { front_line, middle_of_field, back_rank };

Warrior::Warrior():warrior_pos(1) {}

Warrior::Warrior(int pos):warrior_pos(pos) {}

int Warrior::getWarriorPosition() const {
	return warrior_pos;
}

void Warrior::display() const { cout << "\nWarrior Position: " << warrior_pos << endl; }

/*
int Warrior::getPosition( int pos ) {
	if ( pos == 0 ) {
		return front_line;
	}
	else if ( pos == 1 ) {
		return middle_of_field;
	}
	else {
		return back_rank;
	}
	return 0;
}
*/