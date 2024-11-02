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
    for(int i=0; i < pegs.size(); i += 3)
    {
        cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
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

bool TicTacToe::check_column_win()
{
    for(auto i = 0; i < 3; i++)
    {
        if(pegs[i] != " " && (pegs[i] == pegs[i + 3] && pegs[i] == pegs[i + 6]))
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win()
{

    for(auto i = 0; i < 7; i+=3)
    {
        if(pegs[i] != " " && (pegs[i] == pegs[i + 1] && pegs[i] == pegs[i + 2]))
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    bool win = false;
    if(pegs[0] != " " && (pegs[0] == pegs[4]) && (pegs[0] == pegs[8]))
    {
        win = true;
    }
    if(pegs[2] != " " && (pegs[2] == pegs[4]) && (pegs[2] == pegs[6]))
    {
        win = true;
    }
    return win;
}

void TicTacToe::set_winner(string player)
{
    winner = (player == "X") ? "O" : "X";
}