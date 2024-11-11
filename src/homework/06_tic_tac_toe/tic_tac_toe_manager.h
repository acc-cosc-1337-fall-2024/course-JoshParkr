//h
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using std::string;
using std::vector;

class TicTacToeManager
{
public:
    void save_game(TicTacToe b);
    void get_winner_total(int& o, int& x, int& t) {o = o_win; x = x_win; t = ties;}

private:
    vector<TicTacToe> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(string winner);

};

#endif