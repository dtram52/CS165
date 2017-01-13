/******************************************
 *Author: Du Tram
 *Date: December 1, 2016
 *Description: Header file for the class Board- a board of a tic tac toe game.
 * ****************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

enum state{X_WON, O_WON, DRAW, UNFINISHED}; //enum game states

class Board
{	
	private:
		char cBoard[3][3];
	public:
		Board();
		state gameState();
		void print();
		bool makeMove (int x, int y, char player);
		bool checkRowOrColWin( char player);
		bool checkDgnWin( char player);
};
#endif
