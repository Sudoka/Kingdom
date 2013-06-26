#include "Kingdom.h"

enum warrior_pos { frontLine = 1, middle, backRank };

Warrior::Warrior():warrior_pos(1) {}

Warrior::Warrior(int pos):warrior_pos(pos) {}

int Warrior::getWarriorPosition() const {
	return warrior_pos;
}


void Warrior::display() const { cout << "\nWarrior Position: " << this->getWarriorPositionName() << endl; }

char* Warrior::getWarriorPositionName() const {
	if ( warrior_pos == frontLine ) {
		char f[MAX] = "front line";
		return f;
	}
	else if ( warrior_pos == middle ) {
		char m[MAX] = "middle rank";
		return m;
	}
	else {
		char b[MAX] = "back rank";
		return b;
	}
	return 0;
}
