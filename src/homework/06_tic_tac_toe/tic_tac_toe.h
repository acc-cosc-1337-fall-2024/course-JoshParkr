//h
#include <iostream>
#include <string>
#include <vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::string;
using std::vector;

class TicTacToe
{

public:
    TicTacToe() : pegs(9, " ") {}
    TicTacToe(int size):pegs(size*size, " " ){}

    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const{return player;}
    void display_board() const;
    string get_winner() const{return winner;}

private:

    string player;
    string winner;

    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner(string player);

protected:

    vector<string> pegs;

    virtual bool check_column_win() {return false;}
    virtual bool check_row_win() {return false;}
    virtual bool check_diagonal_win() {return false;}

};

#endif