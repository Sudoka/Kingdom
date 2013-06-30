#include <iostream>
#include "Kingdom.h"

/*
===============================================================================
 This program can be changed to use nonduplicate values for the warriors by 
 WarriorFormation to NonDupWarrior we and iterate() at the bottom to showAll().
 ==============================================================================
 */

int main()
{
	NonDupWarrior ndw; 
	Warrior* pw = NULL;
	Error *e = NULL;
	int choice;
	int position;
	
	while(1) {
		int archers = 1, knights = 2, spearman = 3;

	start:
		cout << "\n\n*****************!^LinuxRules^!*******************" << endl;
		cout << "\nPlease select your choice of warriors." << endl;
		cout << "\n(0)Quit (1)Archers (2)Knights (3)Spearmen: ";
		cin >> choice;

// write a function that verifies that the input consists of all digits

		if ( choice < 0 || choice > 3 ) {
			cout << "\nYour input for the warriors is out of range." << endl; 
			e->Display();
			goto start;
		}
				
		if (!choice) {
			break;
		}

		int bWon = 0;
		int front = 1, middle = 2, back = 3;
		if (choice == archers) {
			while(1) {

			start2:
				cout << "\n\nPlease select the position of your Archers" << endl;
				cout << "\n(0)Quit (1)FrontLine (2)Middle (3)BackRank: ";
				cin >> position;

				if (!position) {
					break;
				}

				if ( position < 0 || position > 3 ) {
					cout << "\nYour input for position is out of range." << endl; 
					e->Display();
					goto start2;
				}

			start3:
				if (position == 1) {
					cout << "\nPlease enter the number of battles that these archers have won: ";
					cin >> bWon;
	
					try {
						pw = new Archer( bWon, position );
						}
					catch ( Archer::battlesError ) {
						cout << "\nBattles won should be a nonnegative number." << endl;
						goto start3;
					}
				}
				else if (position == 2) {
					cout << "\nPlease enter the number of battles that these archers have won: ";
					cin >> bWon;

					try {
						pw = new Archer( bWon, position );
						}
					catch ( Archer::battlesError ) {
						cout << "\nBattles won should be a nonnegative number." << endl;
						goto start3;
					}
				}
				else {
					cout << "\nPlease enter the number of battles that these archers have won: ";
					cin >> bWon;

                    try {
						pw = new Archer( bWon, position );
						}
					catch ( Archer::battlesError ) {
						cout << "\nBattles won should be a nonnegative number." << endl;
						goto start3;
					}
				}

				ndw.insert(pw);
				
/*
				try {
					ndw.insert(pw);
				}
				catch ( WarriorFormation::TooBig ) { 
					cout << "\nThe number you entered is too large." << endl; 
					e->Display();
				}
				catch ( WarriorFormation::TooSmall ) { 
					cout << "\nThe number you entered is too small." << endl; 
					e->Display();
				}
				catch ( ... ) { 
					cout << "\nAn error has occured." << endl; 
					e->Display();
				}
*/
			} // close while
		} // close if
		else if (choice == knights) {
			while(1) {

			start4:
				cout << "\n\nPlease select the position of your Knights" << endl;
				cout << "\n(0)Quit (1)FrontLine (2)Middle (3)BackRank: ";
				cin >> position;
				
				if (!position) {
					break;
				}
		
				if ( position < 0 || position > 3 ) {
					cout << "\nYour input for position is out of range." << endl; 
					e->Display();
					goto start4;
				}

			start5:
				if (position == 1) {
					cout << "\nPlease enter the number of battles that these knights have won: ";
					cin >> bWon;
					
					try {
						pw = new Knight( bWon, position );
						}
					catch ( Knight::battlesError ) {
						cout << "\nBattles won should be a nonnegative number." << endl;
						goto start5;
					}
				}
				else if (position == 2) {
					cout << "\nPlease enter the number of battles that these knights have won: ";
					cin >> bWon;

					try {
						pw = new Knight( bWon, position );
						}
					catch ( Knight::battlesError ) {
						cout << "\nBattles won should be a nonnegative number." << endl;
						goto start5;
					}
				}
				else {
					cout << "\nPlease enter the number of battles that these knights have won: ";
					cin >> bWon;
					try {
						pw = new Knight( bWon, position );
						}
					catch ( Knight::battlesError ) {
						cout << "\nBattles won should be a nonnegative number." << endl;
						goto start5;
					}
				}
				ndw.insert(pw);
			} // close while
		} // close else if
		else {
			while(1) {

			start6:
				cout << "\n\nPlease select the position of your Spearmen" << endl;
				cout << "\n(0)Quit (1)FrontLine (2)Middle (3)BackRank: ";
				cin >> position;

				if (!position) {
					break;
				}

				if ( position < 0 || position > 3 ) {
					cout << "\nYour input for position is out of range." << endl; 
					e->Display();
					goto start6;
				}

			start7:
				if (position == 1) {
					cout << "\nPlease enter the number of battles that these spearmen have won: ";
					cin >> bWon;
					try {
						pw = new Spearman( bWon, position );
						}
					catch ( Spearman::battlesError ) {
						cout << "\nBattles won should be a nonnegative number." << endl;
						goto start7;
					}
					pw = new Spearman( bWon, front ); 
				}
				else if (position == 2) {
					cout << "\nPlease enter the number of battles that these spearmen have won: ";
					cin >> bWon;
					try {
						pw = new Spearman( bWon, position );
						}
					catch ( Spearman::battlesError ) {
						cout << "\nBattles won should be a nonnegative number." << endl;
						goto start7;
					}
					pw = new Spearman( bWon, middle );
				}
				else {
					cout << "\nPlease enter the number of battles that these spearmen have won: ";
					cin >> bWon;
					try {
						pw = new Spearman( bWon, position );
						}
					catch ( Spearman::battlesError ) {
						cout << "\nBattles won should be a nonnegative number." << endl;
						goto start7;
					}
					pw = new Spearman( bWon, back );
				}
				ndw.insert(pw);
			} // close while
		} // close else 
	} // close outer while

	ndw.showAll();

	int exit;
	cout << "Please enter any key to exit...";
	cin >> exit;
	return 0;
}
