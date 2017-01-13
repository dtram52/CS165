/******************************************************
 *Author: Du Tram
 *Date: December 1, 2016
 *Description: header file of the tic-tac-toe game that links with a board.
 * ****************************************************/
#include "Board.hpp"

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

class TicTacToe
{
	private:
		Board myboard;
	public: 
		TicTacToe(char firstPlayer);
		void play();
		char currentPlayer;
};

#endif

