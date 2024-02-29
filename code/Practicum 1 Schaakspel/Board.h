#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <utility>
#include <memory>

class Board
{
public:
	Board();
	//~Board();
	/*const 	std::unique_ptr<std::vector<std::vector<char>>> getBoard();*/
	const void print();
private:
	std::vector<std::vector<char>> board;

};

#endif // !BOARD_H

