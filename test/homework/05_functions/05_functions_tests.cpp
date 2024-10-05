#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_gc_content function") {
	REQUIRE(.375 == get_gc_content("AGCTATAG"));
	REQUIRE(.50 == get_gc_content("CGCTATAG"));
}

TEST_CASE("Verify get_dna_complement function") {
	REQUIRE("ACCGGGTTTT" == get_dna_complement("AAAACCCGGT"));
	REQUIRE("ATTTTCCGGG" == get_dna_complement("CCCGGAAAAT"));
}

TEST_CASE("Verify reverse_string function") {
	REQUIRE("GATATCGA" == reverse_string("AGCTATAG"));
	REQUIRE("GATATCGC" == reverse_string("CGCTATAG"));
}