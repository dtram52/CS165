#include "Board.hpp"
#include "TicTacToe.hpp"
#include <iostream>
using namespace std;
/*********************************************************************
** The main function asks user for the first player (x or o),
** initializes a TicTacToe object, and calls the play() member function.
*********************************************************************/
int main() 
{
	char first;
	cout << "Which player will go first, x or o? " <<endl;
	cin >> first;
	TicTacToe myTicTacToe(first);
	myTicTacToe.play();
	return 0;
}

/*********************************************************************
This is the constructor. It takes a char as the argument and initializes the currentPlayer variable.
*********************************************************************/
TicTacToe::TicTacToe(char first) 
{
	currentPlayer = first;	
}


/*********************************************************************
Play function  asks the current player to enter their move, check the validity of their move, and track condition of the game to see if anyone wins or the game is a draw 
*********************************************************************/
void TicTacToe::play() 
{
	// do while game is in unfinished state
	do {
		int row, col;	
		cout << "Player " << currentPlayer << ": please enter your move." << endl; //asks player to move
		cin >> row >> col;

		// if move is valid, switch players
		if (myboard.makeMove(row, col, currentPlayer)) {
			if (currentPlayer == 'o') {
				currentPlayer = 'x';
			}
			else
				currentPlayer = 'o';
		}
		myboard.print();
	} while (myboard.gameState() == UNFINISHED);

	// check game outcome to see if x won, o won, or draw
	if (myboard.gameState() == X_WON) {
		cout << "congrats, x won!!!"<< endl;
	}
	else if (myboard.gameState() == O_WON) {
		cout << "congrats, o won!!!" << endl;
	}
	else
		cout << "We have a Draw." << endl;
}
