#include "Kingdom.h"

WarriorNode::WarriorNode(Warrior* wp):
	type(wp),
	next(0) 
	{}

WarriorNode::~WarriorNode() {
	delete type;
	type = NULL;
	delete next;
	next = NULL;
}

void WarriorNode::setNext(WarriorNode* pn) {
	next = pn;
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
