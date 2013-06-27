#include "Kingdom.h"

WarriorFormation::WarriorFormation():
	pHead(0), 
	count(0) 
	{}

WarriorFormation::~WarriorFormation() {
	delete pHead;
}

int WarriorFormation::getCount() const {
	return count;
}

/* Returns: warrior at position or NULL */

Warrior* WarriorFormation::find(int &position, int warrior_position) const {
	WarriorNode* pNode = 0;
	for ( pNode = pHead, position = 0; pNode != NULL; pNode = pNode->getNext(), position++ ) {
		if ( pNode->getWarriorType()->getWarriorPosition() == warrior_position ) {
			break; // break out of the for loop when warrior_pos is found
		  }
		}
		if (pNode == NULL) {
			return NULL;
		}
		else {
			return pNode->getWarriorType();
		}
	}

Warrior* WarriorFormation::getFirst() const {
	if (pHead) {
		return pHead->getWarriorType();
	}
	else {
		return NULL;
	}
}

void WarriorFormation::insert( Warrior* pw ) {
	WarriorNode* pNode = new WarriorNode( pw );
	int new_pos = pw->getWarriorPosition();
	count++;

	if (!pHead) {
		pHead = pNode;
		return;
	}
		
	if ( pHead->getWarriorType()->getWarriorPosition() > new_pos ) {
		pNode->setNext(pHead);
		pHead = pNode;
		return;
	}
	
	WarriorNode* pCurrent = pHead;
	WarriorNode* pNext = 0;

	for (;;) {
		if (!pCurrent->getNext()) {
			pCurrent->setNext(pNode);
			return;
		}

		pNext = pCurrent->getNext();
		int next = pNext->getWarriorType()->getWarriorPosition();
		if ( next > new_pos ) {
			pCurrent->setNext(pNode);
			pNode->setNext(pNext);
			return;
		}
		pCurrent = pNext;
	} // close the for loop
} // close insert

void WarriorFormation::iterate(void (Warrior::*f)() const) const {
	if (!pHead) {
		return;
	}

	WarriorNode* tNode = pHead;
	do {
		( tNode->getWarriorType()->*f ) ();
	} while ( tNode = tNode->getNext() );
}

Warrior* WarriorFormation::operator[](int offset) const {
	WarriorNode* pNode = pHead;

	if (!pHead) {
		return NULL;
	}
	if (offset > count) {
		return NULL;
	}

	for (int i = 0; i < offset; i++ ) {
		pNode = pNode->getNext();
	}
	return pNode->getWarriorType();
}

