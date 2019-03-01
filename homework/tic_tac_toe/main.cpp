#include "tic_tac_toe.h"
#include <string>
#include <iostream>

int main() 
{
	std::string first;
	char choice;
	int position;
	TicTacToe tic_tac_toe;

	do 
	{
		std::cout << "First player: ";
		std::cin >> first;
		tic_tac_toe.start_game(first);

		while (tic_tac_toe.game_over() == false) 
		{
			std::cout << "Enter position: ";
			std::cin >> position;
			tic_tac_toe.mark_board(position);
		}

		std::cout << "play again";
		std::cin >> choice;

	} while (choice == 'y');


	return 0;
}