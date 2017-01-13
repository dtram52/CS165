/***********************************************
 *Author: Du Tram 
 *Date: December 1, 2016
 *Description: Implemention file for class Board, a part of the tic tac toe game.-i.e the tic-tac-toe board.
 * ********************************************/

#include "Board.hpp"
#include "TicTacToe.hpp"
#include <iostream>
using namespace std;

/*******************************************************************
Constructor that ititialize the empty square of the board with a dot.
********************************************************************/
Board::Board()
{	
	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
			cBoard[i][j] = '.';
		}
	}
}
/********************************************************************
 * print function to print out the board for player to see
*********************************************************************/
void Board::print()
{
	cout << "   0  1  2 " <<endl; 
	for(int row = 0; row <=2; row++)
	{	cout << row << "  ";
		for(int col = 0; col <=2; col++)
		{
			cout << cBoard[row][col]<<"  ";
		}
		cout << endl << endl;
	};
}
/*******************************************************************
makeMove function that take players' moves and update the board.
*******************************************************************/

bool Board::makeMove(int x, int y, char player) {
	// check if move is on the board
	if (x <= 2 && y <= 2)
	{
		// check if space is taken
		if (cBoard[x][y] == '.') 
		{
			cBoard[x][y] = player;
			return true;
		}
		else
		 {
			cout << "That square has been taken. Please make anothermove." << endl;
			return false;
		}
	}
	else
	{
		cout << "Hmm. Sorry but that is not a valid move." << endl;
		return false;
	}
}

/***************************************************************************
*This function tests and return to see if : x won, o won, unfinished, or draw.
****************************************************************************/
state Board::gameState() {


	// check which player has reach the row, column or diagonal win  
	if (checkRowOrColWin('x') || checkDgnWin('x')) {
		return X_WON;
	}
	else if (checkRowOrColWin('o') || checkDgnWin('o')) {
		return O_WON;
	}

	// check the board to see if it's full and no winner 
	for (int i = 0; i <= 2; i++) 
	{
		for (int j = 0; j <= 2; j++) 
		{
			if (cBoard[i][j] == '.')
				return UNFINISHED;
		}
	}

	// if none of the above, return draw
	return DRAW;
}

/*********************************************************************
** checkRowOrColWin(char):
** This function takes a char (player) as the function and checks for
** a row win or a column win.
*********************************************************************/
bool Board::checkRowOrColWin(char player) {
	// check for a column win
	for (int i = 0; i <= 2; i++) {
		if ((cBoard[i][0] != '.') &&
			(cBoard[i][0] == cBoard[i][1]) &&
			(cBoard[i][0] == cBoard[i][2])) {
			if (cBoard[i][0] == player) 
				return true;
		}
		// check for a row win
		else if ((cBoard[0][i] != '.') &&
			(cBoard[0][i] == cBoard[1][i]) &&
			(cBoard[0][i] == cBoard[2][i])) {
			if (cBoard[0][i] == player)
				return true;
		}
	}

	return false;
}

/*********************************************************************
** checkDiagonalWin(char):
** This function takes the player char as an argument and checks for a
** diagonal win.
*********************************************************************/
bool Board::checkDgnWin(char player) {

	// check for diagonal win
	if ((cBoard[1][1] != '.') &&
		(((cBoard[0][0] == cBoard[1][1]) &&
		(cBoard[0][0] == cBoard[2][2])) ||
			// check for NW to SE (downward) diagonal win
			((cBoard[2][0] == cBoard[1][1]) &&
			(cBoard[2][0] == cBoard[0][2])))) {
		if (cBoard[1][1] == player)
			return true;
	}

	return false;
}
