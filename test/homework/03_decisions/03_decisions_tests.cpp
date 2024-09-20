#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_letter_grade_using_if function")
{
	REQUIRE("A" == get_letter_grade_using_if(100));
	REQUIRE("A" == get_letter_grade_using_if(95));
	REQUIRE("B" == get_letter_grade_using_if(85));
	REQUIRE("C" == get_letter_grade_using_if(75));
	REQUIRE("D" == get_letter_grade_using_if(65));
	REQUIRE("F" == get_letter_grade_using_if(50));
	REQUIRE("F" == get_letter_grade_using_if(0));

	REQUIRE("Invalid Grade Inputted" == get_letter_grade_using_if(-50));
	REQUIRE("Invalid Grade Inputted" == get_letter_grade_using_if(200));
}

TEST_CASE("Verify get_letter_grade_using_switch function")
{
	REQUIRE("A" == get_letter_grade_using_switch(100));
	REQUIRE("A" == get_letter_grade_using_switch(95));
	REQUIRE("B" == get_letter_grade_using_switch(85));
	REQUIRE("C" == get_letter_grade_using_switch(75));
	REQUIRE("D" == get_letter_grade_using_switch(65));
	REQUIRE("F" == get_letter_grade_using_switch(50));
	REQUIRE("F" == get_letter_grade_using_switch(0));

	REQUIRE("Invalid Grade Inputted" == get_letter_grade_using_switch(-50));
	REQUIRE("Invalid Grade Inputted" == get_letter_grade_using_if(200));
}