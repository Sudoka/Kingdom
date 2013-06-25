#include <iostream>

using namespace std;

 enum { front_line, middle_of_field, back_rank };

class Warrior
{
public:
	Warrior():warrior_pos(1) {}			// do I need this constructor?
	Warrior(int pos):warrior_pos(pos) {};
	virtual ~Warrior() {};				
	void setWarriorPosition( int pos ); 
	int getWarriorPosition() const { return warrior_pos; }
	int getPosition(int pos);
	virtual void display() const = 0;
private:
	int warrior_pos;
};

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