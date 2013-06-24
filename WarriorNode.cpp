#include <iostream>
#include "Warrior.cpp"

using namespace std;

class WarriorNode
{
public:
	WarriorNode(Warrior *);
	~WarriorNode();
	int getNext() const;
	void setNext(WarriorNode *pn) { next = pn; }
	int getWarriorType() const;
	void setWarriorType( Warrior *pt );
private:
	Warrior *type;
	WarriorNode *next;
};



