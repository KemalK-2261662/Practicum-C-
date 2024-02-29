#include <iostream>

#include "Board.h"

Board::Board()
{
	board.resize(8);

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			board[i].resize(8,'*');
		}
	}
}
/*const std::unique_ptr<std::vector<std::vector<char>>> Board::getBoard()
{
	return board;
}*/

const void Board::print()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
}
