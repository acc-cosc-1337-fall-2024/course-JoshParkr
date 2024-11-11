#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Game Over"){

	TicTacToe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(4);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(7);
	REQUIRE(false == game.game_over());
	game.mark_board(6);
	REQUIRE(false == game.game_over());
	game.mark_board(9);
	REQUIRE(false == game.game_over());

	game.mark_board(8);
	REQUIRE(true == game.game_over());
	REQUIRE("C" == game.get_winner());
}

TEST_CASE("Verify Player"){

	TicTacToe game;

	game.start_game("X");
	REQUIRE( "X" == game.get_player());

	game.start_game("O");
	REQUIRE( "O" == game.get_player());
}

TEST_CASE("Test win by first column"){

	TicTacToe game;

	game.start_game("X"); 
	game.mark_board(1); //X
	REQUIRE(false == game.game_over());
	game.mark_board(2); //O
	REQUIRE(false == game.game_over());
	game.mark_board(4); //X
	REQUIRE(false == game.game_over());
	game.mark_board(3); //O
	REQUIRE(false == game.game_over());
	game.mark_board(7); //X

	REQUIRE( true == game.game_over());

	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win by second column"){

	TicTacToe game;

	game.start_game("X"); 
	game.mark_board(2); //X
	REQUIRE(false == game.game_over());
	game.mark_board(3); //O
	REQUIRE(false == game.game_over());
	game.mark_board(5); //X
	REQUIRE(false == game.game_over());
	game.mark_board(1); //O
	REQUIRE(false == game.game_over());
	game.mark_board(8); //X

	REQUIRE( true == game.game_over());

	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win by third column"){

	TicTacToe game;

	game.start_game("X"); 
	game.mark_board(3); //X
	REQUIRE(false == game.game_over());
	game.mark_board(1); //O
	REQUIRE(false == game.game_over());
	game.mark_board(6); //X
	REQUIRE(false == game.game_over());
	game.mark_board(2); //O
	REQUIRE(false == game.game_over());
	game.mark_board(9); //X

	REQUIRE( true == game.game_over());

	REQUIRE("X" == game.get_winner());

}

TEST_CASE("Test win by first row"){

	TicTacToe game;

	game.start_game("X"); 
	game.mark_board(1); //X
	REQUIRE(false == game.game_over());
	game.mark_board(4); //O
	REQUIRE(false == game.game_over());
	game.mark_board(2); //X
	REQUIRE(false == game.game_over());
	game.mark_board(5); //O
	REQUIRE(false == game.game_over());
	game.mark_board(3); //X

	REQUIRE( true == game.game_over());

	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win by second row"){

	TicTacToe game;

	game.start_game("X"); 
	game.mark_board(4); //X
	REQUIRE(false == game.game_over());
	game.mark_board(1); //O
	REQUIRE(false == game.game_over());
	game.mark_board(5); //X
	REQUIRE(false == game.game_over());
	game.mark_board(2); //O
	REQUIRE(false == game.game_over());
	game.mark_board(6); //X

	REQUIRE( true == game.game_over());

	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win by third row"){

	TicTacToe game;

	game.start_game("X"); 
	game.mark_board(7); //X
	REQUIRE(false == game.game_over());
	game.mark_board(1); //O
	REQUIRE(false == game.game_over());
	game.mark_board(8); //X
	REQUIRE(false == game.game_over());
	game.mark_board(2); //O
	REQUIRE(false == game.game_over());
	game.mark_board(9); //X

	REQUIRE( true == game.game_over());

	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win diagonally from top left"){

	TicTacToe game;

	game.start_game("X"); 
	game.mark_board(1); //X
	REQUIRE(false == game.game_over());
	game.mark_board(2); //O
	REQUIRE(false == game.game_over());
	game.mark_board(5); //X
	REQUIRE(false == game.game_over());
	game.mark_board(3); //O
	REQUIRE(false == game.game_over());
	game.mark_board(9); //X

	REQUIRE( true == game.game_over());

	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test win diagonally from bottom left"){

	TicTacToe game;

	game.start_game("X"); 
	game.mark_board(7); //X
	REQUIRE(false == game.game_over());
	game.mark_board(1); //O
	REQUIRE(false == game.game_over());
	game.mark_board(5); //X
	REQUIRE(false == game.game_over());
	game.mark_board(2); //O
	REQUIRE(false == game.game_over());
	game.mark_board(3); //X

	REQUIRE( true == game.game_over());

	REQUIRE("X" == game.get_winner());
}

TEST_CASE("Test 3 games score")
{
	TicTacToeManager games;
	int o, x, t;

	//game1

	TicTacToe game1;

	game1.start_game("X");

	game1.mark_board(1);
	REQUIRE(false == game1.game_over());
	game1.mark_board(2);
	REQUIRE(false == game1.game_over());
	game1.mark_board(3);
	REQUIRE(false == game1.game_over());
	game1.mark_board(4);
	REQUIRE(false == game1.game_over());
	game1.mark_board(5);
	REQUIRE(false == game1.game_over());
	game1.mark_board(7);
	REQUIRE(false == game1.game_over());
	game1.mark_board(6);
	REQUIRE(false == game1.game_over());
	game1.mark_board(9);
	REQUIRE(false == game1.game_over());

	game1.mark_board(8);
	REQUIRE(true == game1.game_over());
	REQUIRE("C" == game1.get_winner());

	games.save_game(game1);
	games.get_winner_total(o, x, t);

	REQUIRE(x == 0);
	REQUIRE(o == 0);
	REQUIRE(t == 1);

	//game2

	TicTacToe game2;

	game2.start_game("X"); 
	game2.mark_board(7); //X
	REQUIRE(false == game2.game_over());
	game2.mark_board(1); //O
	REQUIRE(false == game2.game_over());
	game2.mark_board(5); //X
	REQUIRE(false == game2.game_over());
	game2.mark_board(2); //O
	REQUIRE(false == game2.game_over());
	game2.mark_board(3); //X

	REQUIRE( true == game2.game_over());

	REQUIRE("X" == game2.get_winner());

	games.save_game(game2);
	games.get_winner_total(o, x, t);

	REQUIRE(o == 0);
	REQUIRE(x == 1);
	REQUIRE(t == 1);

	//game3

	TicTacToe game3;

	game3.start_game("O"); 
	game3.mark_board(1); //O
	REQUIRE(false == game3.game_over());
	game3.mark_board(2); //X
	REQUIRE(false == game3.game_over());
	game3.mark_board(5); //O
	REQUIRE(false == game3.game_over());
	game3.mark_board(3); //X
	REQUIRE(false == game3.game_over());
	game3.mark_board(9); //O

	REQUIRE( true == game3.game_over());

	REQUIRE("O" == game3.get_winner());

	games.save_game(game3);
	games.get_winner_total(o, x, t);

	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);

}