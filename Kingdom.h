#ifndef KINGDOM_H
#define	KINGDOM_H

#include <iostream>
using namespace std;

#define MAX 1024

#define DEFAULT_SIZE 3

/*
===========================================================
* This class is an abstract class from which other classes
* inherit.
===========================================================
*/

class Warrior
{
public:
	Warrior();	// do I need this constructor?
	Warrior(int pos);
	virtual ~Warrior() {};	
	int getWarriorPosition() const;
	char* getWarriorPositionName() const;
	virtual void display() const = 0; // must be overriden
protected:
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
	class battlesError {};
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
	class battlesError {};
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
	class battlesError {};
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
	void iterate(void (Warrior::*f)()const) const;
	Warrior* operator[](int) const;

/* exception classes
class Error
{
	void Display() const { cout << "Please enter numbers form one to three." << endl; }
};

class TooBig : public Error {};
class TooSmall : public Error {};
*/

private:
	WarriorNode* pHead;
	int count;
};


/*
=======================================================
 This class does not allow duplicates, is an unordered 
 collection of warriors, and allows access by position.
 ======================================================
 */

class NonDupWarrior
{
public:
	void insert( Warrior* );
	int exists( int warrior_pos );
	Warrior* get( int warrior_pos );
//	operator+(const NonDupWarrior&);
	void showAll();
private:
	WarriorFormation warForm;
};

template <class T>
class Array
{
public:
	Array( int size = DEFAULT_SIZE );
	Array( const Array& );
	~Array();

	T& operator[] ( int index );
	const T& operator[] ( int index ) const;
	Array& operator= ( const Array& );

	int getSize() const;
	int getType() const;

	friend ostream& operator<< ( ostream& output, const Array<T>& arr );

private:
	T* arr;
	int size;
	int type;
};

// exception classes
class Error
{
public:
	void Display() { cout << "Please enter numbers form one to three." << endl; }
};

/*
class TooBig : public Error {};
class TooSmall : public Error {};
class NotNumber : public Error {};
*/

#endif