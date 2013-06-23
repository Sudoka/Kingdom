#include <iostream>

using namespace std;

class Warrior
{
public:
	Warrior():warrior(1) {}			// do I need this constructor?
	Warrior(int type):warrior(type) {};
	virtual ~Warrior() {};				
	void setWarrior( int warriorType ); 
	int getWarrior() const { return warrior; }
	virtual void display() const = 0;
private:
	int warrior;
};

void Warrior::display() const {};