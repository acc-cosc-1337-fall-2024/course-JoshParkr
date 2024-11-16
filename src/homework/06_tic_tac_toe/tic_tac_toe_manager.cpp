//cpp
#include "tic_tac_toe_manager.h"

using std::cout;

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());

    games.push_back(std::move(game));
}

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X") 
    {
        x_win ++;
    }
    else if (winner == "O") 
    {
        o_win ++;
    }
    else
    {
        ties ++;
    }
}

void TicTacToeManager::display_games()
{
    for (auto& game : games)
    {
        game->display_board();
        cout << "\n";
    }
}