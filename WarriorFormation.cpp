#include <iostream>
#include "WarriorNode.cpp"

using namespace std;

class WarriorFormation 
{
public:
	WarriorFormation();
	~WarriorFormation();
	Warrior* Find(int &position, int warrior_position ) const;
	int getCount() const { return count; }
	Warrior* getFirst() const;
	void Insert( WarriorNode *);
	void Iterate() const;
	Warrior* operator[](int) const;
private:
	WarriorNode* pHead;
	int count;
};