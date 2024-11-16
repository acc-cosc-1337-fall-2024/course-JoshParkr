//cpp
#include "tic_tac_toe.h"

using std::cout; using std::cin;

bool TicTacToe::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner(player);
        return true;
    }
    else if (check_board_full())
    {
        winner = "C";
        return true;
    }
    
    return false;
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    int num_cols = 3; 

    if (pegs.size() == 16) 
    {
        num_cols = 4; 
    }
    
    for (int i = 0; i < pegs.size(); i += num_cols)
    {
        for (int j = 0; j < num_cols; ++j)
        {
            cout << pegs[i + j];
            if (j < num_cols - 1)
                cout << "|";
        }
        cout << "\n";
    }
}

//private functions
void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(auto i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_winner(string player)
{
    winner = (player == "X") ? "O" : "X";
}