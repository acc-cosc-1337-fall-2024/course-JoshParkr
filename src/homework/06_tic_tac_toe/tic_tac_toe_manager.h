//h
#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using std::string;
using std::vector; using std::unique_ptr;

class TicTacToeManager
{
public:
    void save_game(unique_ptr<TicTacToe> &game);
    void get_winner_total(int& o, int& x, int& t) {o = o_win; x = x_win; t = ties;}
    void display_games();

private:
    vector<unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(string winner);

};

#endif