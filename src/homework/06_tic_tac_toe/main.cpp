#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include <memory>

using std::cout; using std::cin;
using std::make_unique; using std::unique_ptr;

int main() 
{
	string first_player;
	int position;
	char user_play_again;
	TicTacToeManager manager;
	int board_type;

	do
	{
		unique_ptr<TicTacToe> game;
		do
		{
			cout << "TicTacToe!\n\nEnter 3 (3x3 board) or 4 (4x4): ";
			cin >> board_type;

			switch (board_type)
			{
			case 3:
				game = make_unique<TicTacToe3>();
				break;
			
			case 4:
				game = make_unique<TicTacToe4>();
				break;

			default:
				cout << "Please enter (3 or 4).\n\n";
				break;
			}
		} while(board_type !=3 && board_type !=4);

		do
		{
			cout << "Enter first player: ";
			cin >> first_player;
		}
		while(first_player != "X" && first_player != "O");
		game->start_game(first_player);

		while(!game->game_over())
		{
			cout << "Enter a postion: ";
			cin >> position;
			game->mark_board(position);
			game->display_board();
		}

		cout << "\nWinner!: " << game->get_winner() << "\n";
		
		manager.save_game(game);
		
		int o, x, t;
		manager.get_winner_total(o, x, t);

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