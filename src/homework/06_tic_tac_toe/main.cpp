#include "tic_tac_toe.h"
#include<iostream>

using std::cout; using std::cin;

int main() 
{
	string first_player;
	int position;
	char user_play_again;

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

		cout << "Winner!: " << game.get_winner() << "\n";

		cout << "Play again, enter y or Y: ";
		cin >> user_play_again;

	} while(user_play_again == 'y' || user_play_again == 'Y');
	
	cout << "Goodbye :) ending program . . .";
	return 0;
}