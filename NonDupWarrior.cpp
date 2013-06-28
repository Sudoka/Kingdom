#include "Kingdom.h"

void NonDupWarrior::insert(Warrior* pw) {
	int warrior_pos = pw->getWarriorPosition();
	int start;

	if ( !warForm.find(start, warrior_pos) ) {
		warForm.insert( pw );  // Note that insert was called on the private member variable of NonDupWarrion class
	}
	else {
		cout << pw->getWarriorPositionName() << " is occupied at position";
		switch( start ) {
		case 0:	cout << " one."; break;
		case 1:	cout << " two."; break;
		case 2: cout << " three."; break;
		}
		cout << "\nPlease try another position.\n";
	}
}

int NonDupWarrior::exists(int num) {
	int start;
	warForm.find(start, num);
	return start;
}

Warrior* NonDupWarrior::get(int pos) {
	int start = 0;
	Warrior* pw = warForm.find(start, pos);
	return pw;
}

void NonDupWarrior::showAll() {
	warForm.iterate( &Warrior::display ); // need to include the address of the function
}