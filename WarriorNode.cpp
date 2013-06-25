#include <iostream>
#include "Warrior.cpp"

using namespace std;

class WarriorNode
{
public:
	WarriorNode(Warrior *);
	~WarriorNode();
	WarriorNode* getNext() const;
	void setNext(WarriorNode *pn) { next = pn; }
	Warrior* getWarriorType() const;
private:
	Warrior *type;
	WarriorNode *next;
};

WarriorNode::WarriorNode(Warrior *wp):type(wp),next(0) {}

WarriorNode::~WarriorNode() {
	delete type;
	type = NULL;
	delete next;
	next = NULL;
}

WarriorNode* WarriorNode::getNext() const {
	return next;
}

Warrior* WarriorNode::getWarriorType() const {
	if (type) {
		return type;
	}
	else {
		return NULL;
	}
}
