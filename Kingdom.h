#ifndef KINGDOM_H
#define	KINGDOM_H

#include <iostream>
using namespace std;

#define MAX 1024

class Warrior
{
public:
	Warrior();	// do I need this constructor?
	Warrior(int pos);
	virtual ~Warrior() {};	
	int getWarriorPosition() const;
	char* getWarriorPositionName() const;
	virtual void display() const = 0;
private:
	int warrior_pos;
};

class Archer : public Warrior
{
public:
	Archer();
	Archer( int bw, int pos);
	int getBattlesWon() const;
	void setBattlesWon(int b);
	virtual void display() const;
	
private:
	int battles_won;
};

class Spearman : public Warrior
{
public:
	Spearman();
	Spearman( int bw, int pos);
	int getBattlesWon() const;
	void setBattlesWon(int b);
	virtual void display() const;
	
private:
	int battles_won;
};

class Knight : public Warrior
{
public:
	Knight();
	Knight( int bw, int pos);
	int getBattlesWon() const;
	void setBattlesWon(int b);
	virtual void display() const;
	
private:
	int battles_won;
};

class WarriorNode
{
public:
	WarriorNode(Warrior *);
	~WarriorNode();
	WarriorNode* getNext() const;
	void setNext(WarriorNode *pn);
	Warrior* getWarriorType() const;
private:
	Warrior* type;
	WarriorNode* next;
};

class WarriorFormation
{
public:
	WarriorFormation();
	~WarriorFormation();
	Warrior* find(int &position, int warrior_position ) const;
	int getCount() const;
	Warrior* getFirst() const;
	void insert( Warrior* );
	void iterate() const;
	Warrior* operator[](int) const;
private:
	WarriorNode* pHead;
	int count;
};

#endif