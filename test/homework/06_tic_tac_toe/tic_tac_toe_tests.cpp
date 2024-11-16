#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Game Over"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());

	game->mark_board(8);
	REQUIRE(true == game->game_over());
	REQUIRE("C" == game->get_winner());
}

TEST_CASE("Verify Player"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();

	game->start_game("X");
	REQUIRE( "X" == game->get_player());

	game->start_game("O");
	REQUIRE( "O" == game->get_player());
}

TEST_CASE("3Test win by first column"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();

	game->start_game("X"); 
	game->mark_board(1); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(4); //X
	REQUIRE(false == game->game_over());
	game->mark_board(3); //O
	REQUIRE(false == game->game_over());
	game->mark_board(7); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("3Test win by second column"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();

	game->start_game("X"); 
	game->mark_board(2); //X
	REQUIRE(false == game->game_over());
	game->mark_board(3); //O
	REQUIRE(false == game->game_over());
	game->mark_board(5); //X
	REQUIRE(false == game->game_over());
	game->mark_board(1); //O
	REQUIRE(false == game->game_over());
	game->mark_board(8); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("3Test win by third column"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();

	game->start_game("X"); 
	game->mark_board(3); //X
	REQUIRE(false == game->game_over());
	game->mark_board(1); //O
	REQUIRE(false == game->game_over());
	game->mark_board(6); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(9); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());

}

TEST_CASE("3Test win by first row"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();

	game->start_game("X"); 
	game->mark_board(1); //X
	REQUIRE(false == game->game_over());
	game->mark_board(4); //O
	REQUIRE(false == game->game_over());
	game->mark_board(2); //X
	REQUIRE(false == game->game_over());
	game->mark_board(5); //O
	REQUIRE(false == game->game_over());
	game->mark_board(3); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("3Test win by second row"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();

	game->start_game("X"); 
	game->mark_board(4); //X
	REQUIRE(false == game->game_over());
	game->mark_board(1); //O
	REQUIRE(false == game->game_over());
	game->mark_board(5); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(6); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("3Test win by third row"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();

	game->start_game("X"); 
	game->mark_board(7); //X
	REQUIRE(false == game->game_over());
	game->mark_board(1); //O
	REQUIRE(false == game->game_over());
	game->mark_board(8); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(9); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("3Test win diagonally from top left"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();

	game->start_game("X"); 
	game->mark_board(1); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(5); //X
	REQUIRE(false == game->game_over());
	game->mark_board(3); //O
	REQUIRE(false == game->game_over());
	game->mark_board(9); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("3Test win diagonally from bottom left"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();

	game->start_game("X"); 
	game->mark_board(7); //X
	REQUIRE(false == game->game_over());
	game->mark_board(1); //O
	REQUIRE(false == game->game_over());
	game->mark_board(5); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(3); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("3Test 3 games score")
{
	TicTacToeManager games;
	int o, x, t;

	//game1

	unique_ptr<TicTacToe> game1;
	game1 = std::make_unique<TicTacToe3>();

	game1->start_game("X");

	game1->mark_board(1);
	REQUIRE(false == game1->game_over());
	game1->mark_board(2);
	REQUIRE(false == game1->game_over());
	game1->mark_board(3);
	REQUIRE(false == game1->game_over());
	game1->mark_board(4);
	REQUIRE(false == game1->game_over());
	game1->mark_board(5);
	REQUIRE(false == game1->game_over());
	game1->mark_board(7);
	REQUIRE(false == game1->game_over());
	game1->mark_board(6);
	REQUIRE(false == game1->game_over());
	game1->mark_board(9);
	REQUIRE(false == game1->game_over());

	game1->mark_board(8);
	REQUIRE(true == game1->game_over());
	REQUIRE("C" == game1->get_winner());

	games.save_game(game1);

	games.get_winner_total(o, x, t);

	REQUIRE(x == 0);
	REQUIRE(o == 0);
	REQUIRE(t == 1);

	//game2

	unique_ptr<TicTacToe> game2;
	game2 = std::make_unique<TicTacToe3>();

	game2->start_game("X"); 
	game2->mark_board(7); //X
	REQUIRE(false == game2->game_over());
	game2->mark_board(1); //O
	REQUIRE(false == game2->game_over());
	game2->mark_board(5); //X
	REQUIRE(false == game2->game_over());
	game2->mark_board(2); //O
	REQUIRE(false == game2->game_over());
	game2->mark_board(3); //X

	REQUIRE( true == game2->game_over());

	REQUIRE("X" == game2->get_winner());

	games.save_game(game2);

	games.get_winner_total(o, x, t);

	REQUIRE(o == 0);
	REQUIRE(x == 1);
	REQUIRE(t == 1);

	//game3

	unique_ptr<TicTacToe> game3;
	game3 = std::make_unique<TicTacToe3>();

	game3->start_game("O"); 
	game3->mark_board(1); //O
	REQUIRE(false == game3->game_over());
	game3->mark_board(2); //X
	REQUIRE(false == game3->game_over());
	game3->mark_board(5); //O
	REQUIRE(false == game3->game_over());
	game3->mark_board(3); //X
	REQUIRE(false == game3->game_over());
	game3->mark_board(9); //O

	REQUIRE( true == game3->game_over());

	REQUIRE("O" == game3->get_winner());

	games.save_game(game3);

	games.get_winner_total(o, x, t);

	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);

}

//Test cases for tictactoe4 --------------------------------------------------------------


TEST_CASE("4Test win by first column"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();

	game->start_game("X"); 
	game->mark_board(1); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(5); //X
	REQUIRE(false == game->game_over());
	game->mark_board(3); //O
	REQUIRE(false == game->game_over());
	game->mark_board(9); //X
	REQUIRE(false == game->game_over());
	game->mark_board(4); //O
	REQUIRE(false == game->game_over());
	game->mark_board(13); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("4Test win by second column"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();

	game->start_game("X"); 
	game->mark_board(2); //X
	REQUIRE(false == game->game_over());
	game->mark_board(3); //O
	REQUIRE(false == game->game_over());
	game->mark_board(6); //X
	REQUIRE(false == game->game_over());
	game->mark_board(1); //O
	REQUIRE(false == game->game_over());
	game->mark_board(10); //X
	REQUIRE(false == game->game_over());
	game->mark_board(4); //O
	REQUIRE(false == game->game_over());
	game->mark_board(14); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("4Test win by third column"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();

	game->start_game("X"); 
	game->mark_board(3); //X
	REQUIRE(false == game->game_over());
	game->mark_board(1); //O
	REQUIRE(false == game->game_over());
	game->mark_board(7); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(11); //X
	REQUIRE(false == game->game_over());
	game->mark_board(4); //O
	REQUIRE(false == game->game_over());
	game->mark_board(15); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());

}

TEST_CASE("4Test win by forth column"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();

	game->start_game("X"); 
	game->mark_board(4); //X
	REQUIRE(false == game->game_over());
	game->mark_board(1); //O
	REQUIRE(false == game->game_over());
	game->mark_board(8); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(12); //X
	REQUIRE(false == game->game_over());
	game->mark_board(3); //O
	REQUIRE(false == game->game_over());
	game->mark_board(16); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());

}

TEST_CASE("4Test win by first row"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();

	game->start_game("X"); 
	game->mark_board(1); //X
	REQUIRE(false == game->game_over());
	game->mark_board(5); //O
	REQUIRE(false == game->game_over());
	game->mark_board(2); //X
	REQUIRE(false == game->game_over());
	game->mark_board(6); //O
	REQUIRE(false == game->game_over());
	game->mark_board(3); //X
	REQUIRE(false == game->game_over());
	game->mark_board(7); //O
	REQUIRE(false == game->game_over());
	game->mark_board(4); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("4Test win by second row"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();

	game->start_game("X"); 
	game->mark_board(5); //X
	REQUIRE(false == game->game_over());
	game->mark_board(1); //O
	REQUIRE(false == game->game_over());
	game->mark_board(6); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(7); //X
	REQUIRE(false == game->game_over());
	game->mark_board(3); //O
	REQUIRE(false == game->game_over());
	game->mark_board(8); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("4Test win by third row"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();

	game->start_game("X"); 
	game->mark_board(9); //X
	REQUIRE(false == game->game_over());
	game->mark_board(1); //O
	REQUIRE(false == game->game_over());
	game->mark_board(10); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(11); //X
	REQUIRE(false == game->game_over());
	game->mark_board(3); //O
	REQUIRE(false == game->game_over());
	game->mark_board(12); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("4Test win by forth row"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();

	game->start_game("X"); 
	game->mark_board(13); //X
	REQUIRE(false == game->game_over());
	game->mark_board(1); //O
	REQUIRE(false == game->game_over());
	game->mark_board(14); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(15); //X
	REQUIRE(false == game->game_over());
	game->mark_board(3); //O
	REQUIRE(false == game->game_over());
	game->mark_board(16); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("4Test win diagonally from top left"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();

	game->start_game("X"); 
	game->mark_board(1); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(6); //X
	REQUIRE(false == game->game_over());
	game->mark_board(3); //O
	REQUIRE(false == game->game_over());
	game->mark_board(11); //X
	REQUIRE(false == game->game_over());
	game->mark_board(4); //O
	REQUIRE(false == game->game_over());
	game->mark_board(16); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("4Test win diagonally from bottom left"){

	unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();

	game->start_game("X"); 
	game->mark_board(13); //X
	REQUIRE(false == game->game_over());
	game->mark_board(1); //O
	REQUIRE(false == game->game_over());
	game->mark_board(10); //X
	REQUIRE(false == game->game_over());
	game->mark_board(2); //O
	REQUIRE(false == game->game_over());
	game->mark_board(7); //X
	REQUIRE(false == game->game_over());
	game->mark_board(3); //O
	REQUIRE(false == game->game_over());
	game->mark_board(4); //X

	REQUIRE( true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("4Test 3 games score")
{
	TicTacToeManager games;
	int o, x, t;

	//game1

	unique_ptr<TicTacToe> game1;
	game1 = std::make_unique<TicTacToe4>();

	game1->start_game("X");

	game1->mark_board(1);
	REQUIRE(false == game1->game_over());
	game1->mark_board(2);
	REQUIRE(false == game1->game_over());
	game1->mark_board(3);
	REQUIRE(false == game1->game_over());
	game1->mark_board(4);
	REQUIRE(false == game1->game_over());
	game1->mark_board(6);
	REQUIRE(false == game1->game_over());
	game1->mark_board(5);
	REQUIRE(false == game1->game_over());
	game1->mark_board(8);
	REQUIRE(false == game1->game_over());
	game1->mark_board(7);
	REQUIRE(false == game1->game_over());
	game1->mark_board(9);
	REQUIRE(false == game1->game_over());
	game1->mark_board(10);
	REQUIRE(false == game1->game_over());
	game1->mark_board(11);
	REQUIRE(false == game1->game_over());
	game1->mark_board(12);
	REQUIRE(false == game1->game_over());
	game1->mark_board(14);
	REQUIRE(false == game1->game_over());
	game1->mark_board(15);
	REQUIRE(false == game1->game_over());
	game1->mark_board(13);
	REQUIRE(false == game1->game_over());

	game1->mark_board(16);
	REQUIRE(true == game1->game_over());
	REQUIRE("C" == game1->get_winner());

	games.save_game(game1);

	games.get_winner_total(o, x, t);

	REQUIRE(x == 0);
	REQUIRE(o == 0);
	REQUIRE(t == 1);

	//game2

	unique_ptr<TicTacToe> game2;
	game2 = std::make_unique<TicTacToe4>();

	game2->start_game("X"); 
	game2->mark_board(1); //X
	REQUIRE(false == game2->game_over());
	game2->mark_board(2); //O
	REQUIRE(false == game2->game_over());
	game2->mark_board(5); //X
	REQUIRE(false == game2->game_over());
	game2->mark_board(3); //O
	REQUIRE(false == game2->game_over());
	game2->mark_board(9); //X
	REQUIRE(false == game2->game_over());
	game2->mark_board(4); //O
	REQUIRE(false == game2->game_over());
	game2->mark_board(13); //X

	REQUIRE( true == game2->game_over());

	REQUIRE("X" == game2->get_winner());

	games.save_game(game2);

	games.get_winner_total(o, x, t);

	REQUIRE(o == 0);
	REQUIRE(x == 1);
	REQUIRE(t == 1);

	//game3

	unique_ptr<TicTacToe> game3;
	game3 = std::make_unique<TicTacToe4>();

	game3->start_game("O"); 
	game3->mark_board(1); //O
	REQUIRE(false == game3->game_over());
	game3->mark_board(5); //X
	REQUIRE(false == game3->game_over());
	game3->mark_board(2); //O
	REQUIRE(false == game3->game_over());
	game3->mark_board(6); //X
	REQUIRE(false == game3->game_over());
	game3->mark_board(3); //O
	REQUIRE(false == game3->game_over());
	game3->mark_board(7); //X
	REQUIRE(false == game3->game_over());
	game3->mark_board(4); //O

	REQUIRE( true == game3->game_over());

	REQUIRE("O" == game3->get_winner());

	games.save_game(game3);

	games.get_winner_total(o, x, t);

	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);

}