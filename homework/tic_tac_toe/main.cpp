#include "tic_tac_toe.h"
#include <string>
#include <iostream>
using std::cout; using std::cin;


int main() 
{
	std::string first;
	char choice;
	int position;
	TicTacToe tic_tac_toe;

	do 
	{
		cout << "First player: ";
		cin >> first;
		tic_tac_toe.start_game(first);

		while (tic_tac_toe.game_over() == false) 
		{
			cout << "Enter position for "<<tic_tac_toe.get_player();
			cin >> position;
			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();
			cout << "\n\n";
		}

		cout << "play again";
		cin >> choice;

	} while (choice == 'y');


	return 0;
}