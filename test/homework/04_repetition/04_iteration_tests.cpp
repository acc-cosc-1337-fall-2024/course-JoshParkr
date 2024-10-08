#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify factorial function") {
	REQUIRE(6 == factorial(3));
	REQUIRE(120 == factorial(5));
	REQUIRE(720 == factorial(6));

	REQUIRE(0 == factorial(0));
	REQUIRE(0 == factorial(-10));
}

TEST_CASE("Verify gcd function") {
	REQUIRE(5 == gcd(5,15));
	REQUIRE(7 == gcd(21,28));
	REQUIRE(25 == gcd(25,100));

	REQUIRE(25 == gcd(100,25));
	REQUIRE(1 == gcd(7,13));
}