#include <iostream>
#include "Warrior.cpp"

using namespace std;

class Spearman : public Warrior
{
public:
	Spearman():battles_won(0) {}
	Spearman( int bw, int pos ):Warrior(pos),battles_won(0) {}
	int getBattlesWon() const { return battles_won; }
	void setBattlesWon() { battles_won; }
	virtual void display() const { 
		Warrior::display();	
		cout << "Spearmen: battles won = " << battles_won << endl; 
	}
private:
	int battles_won;
};