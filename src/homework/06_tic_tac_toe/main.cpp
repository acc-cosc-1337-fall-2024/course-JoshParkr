#include "tic_tac_toe.h"
#include<iostream>

using std::cout; using std::cin;

int main() 
{
	TicTacToe game;
	string first_player;
	int position;
	char user_play_again;

	do
	{
		cout << "Enter first player: ";
		cin >> first_player;

		game.start_game(first_player);

		while(!game.game_over())
		{
			cout << "Enter a postion: ";
			cin >> position;
			game.mark_board(position);
			game.display_board();
		}

		cout << "Play again, enter y or Y: ";
		cin >> user_play_again;

	} while(user_play_again == 'y' || user_play_again == 'Y');
	
	cout << "Goodbye :) ending program . . .";
	return 0;
}