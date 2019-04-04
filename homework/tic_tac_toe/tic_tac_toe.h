#ifndef TIC_TAC_TOE
#define TIC_TAC_TOE

#include<iostream>
#include<string>
#include<vector>

enum GameType
{
	three = 3,
	four = 4
};

class TicTacToe 
{
public:
	TicTacToe() : pegs(9, " ") {}
	TicTacToe(GameType game_type) : pegs(game_type * game_type, " ") {}
	void start_game(std::string first_player);
	std::string get_player() const;
	bool game_over();
	void mark_board(int position);
	std::string get_winner()const;
	friend std::ostream & operator << (std::ostream & out,
		const TicTacToe & t);
	friend std::istream & operator >> (std::istream & out,
		TicTacToe & t);

protected:
	std::vector<std::string> pegs;
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();

private:
	std::string next_player;
	std::string winner;

	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
};

#endif // !TIC_TAC_TOE