#include <iostream>
#include "Kingdom.h"

int main()
{
	NonDupWarrior ndw;
	Warrior* pw;
	int choice;
	int position;
	
	while(1) {
		int archers = 1, knights = 2, spearman = 3;
		cout << "\n\n********************************************" << endl;
		cout << "\nPlease select your choice of warriors." << endl;
		cout << "\n(0)Quit (1)Archers (2)Knights (3)Spearmen: ";
		cin >> choice;

		if (!choice) {
			break;
		}

		int bWon = 0;
		int front = 1, middle = 2, back = 3;
		if (choice == archers) {
			while(1) {
				cout << "\n\nPlease select the position of your Archers" << endl;
				cout << "\n(0)Quit (1)FrontLine (2)Middle (3)BackRank: ";
				cin >> position;

				if (!position) {
					break;
				}
		
				if (position == 1) {
					cout << "\nPlease enter the number of battles that these archers have won: ";
					cin >> bWon;
					pw = new Archer( bWon, front ); 
				}
				else if (position == 2) {
					cout << "\nPlease enter the number of battles that these archers have won: ";
					cin >> bWon;
					pw = new Archer( bWon, middle );
				}
				else {
					cout << "\nPlease enter the number of battles that these archers have won: ";
					cin >> bWon;
					pw = new Archer( bWon, back );
				}
				ndw.insert(pw);
			} // close while
		} // close if
		else if (choice == knights) {
			while(1) {
				cout << "\n\nPlease select the position of your Knights" << endl;
				cout << "\n(0)Quit (1)FrontLine (2)Middle (3)BackRank: ";
				cin >> position;

				if (!position) {
					break;
				}
		
				if (position == 1) {
					cout << "\nPlease enter the number of battles that these knights have won: ";
					cin >> bWon;
					pw = new Knight( bWon, front ); 
				}
				else if (position == 2) {
					cout << "\nPlease enter the number of battles that these knights have won: ";
					cin >> bWon;
					pw = new Knight( bWon, middle );
				}
				else {
					cout << "\nPlease enter the number of battles that these knights have won: ";
					cin >> bWon;
					pw = new Knight( bWon, back );
				}
				ndw.insert(pw);
			} // close while
		} // close else if
		else {
				while(1) {
				cout << "\n\nPlease select the position of your Spearmen" << endl;
				cout << "\n(0)Quit (1)FrontLine (2)Middle (3)BackRank: ";
				cin >> position;

				if (!position) {
					break;
				}
		
				if (position == 1) {
					cout << "\nPlease enter the number of battles that these spearmen have won: ";
					cin >> bWon;
					pw = new Spearman( bWon, front ); 
				}
				else if (position == 2) {
					cout << "\nPlease enter the number of battles that these spearmen have won: ";
					cin >> bWon;
					pw = new Spearman( bWon, middle );
				}
				else {
					cout << "\nPlease enter the number of battles that these spearmen have won: ";
					cin >> bWon;
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
