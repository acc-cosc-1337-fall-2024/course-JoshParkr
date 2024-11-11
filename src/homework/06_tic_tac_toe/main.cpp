#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>

using std::cout; using std::cin;

int main() 
{
	string first_player;
	int position;
	char user_play_again;
	TicTacToeManager manager;

	do
	{
		TicTacToe game;
		do
		{
			cout << "Enter first player: ";
			cin >> first_player;
		}
		while(first_player != "X" && first_player != "O");
		game.start_game(first_player);

		while(!game.game_over())
		{
			cout << "Enter a postion: ";
			cin >> position;
			game.mark_board(position);
			game.display_board();
		}

		manager.save_game(game);

		int o, x, t;
		manager.get_winner_total(o, x, t);

		cout << "\nWinner!: " << game.get_winner() << "\n";

		cout << "\nO wins: " << o << "\n";
		cout << "X wins: " << x << "\n";
		cout << "Ties: " << t << "\n\n";

		cout << "Play again, enter y or Y: ";
		cin >> user_play_again;
		cout << "\n\n";

	} while(user_play_again == 'y' || user_play_again == 'Y');
	
	cout << "Goodbye :) ending program . . .";
	return 0;
}