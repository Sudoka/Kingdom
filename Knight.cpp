#include <iostream>
#include "Warrior.cpp"

using namespace std;

class Knight: public Warrior
{
public:
	Knight() { battles_won = 0; }
	Knight( int bw, int pos );
	int getBattlesWon() const { return battles_won; }
	void setBattlesWon() { battles_won; }
	virtual void display() const { 
		Warrior::display();	
		cout << "Knights: battles won = " << battles_won << endl; 
	}
private:
	int battles_won;
};

Knight::Knight(int bw, int pos):Warrior(pos),battles_won(bw) {}
