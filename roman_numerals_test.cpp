/*******************************************************
* Copyright (C) 2024 emanuks <emanuels313@gmail.com>
*
* This file is part of roman-numerals.
*
* roman-numerals can not be copied and/or distributed without the express
* permission of emanuks
*******************************************************/

// This tells Catch to provide a main() - only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "./catch.hpp"
#include "./roman_numerals.hpp"

TEST_CASE("Roman Numerals - Valid", "[roman_numerals]") {
    REQUIRE(roman_numerals_to_decimal("I") == 1);
    REQUIRE(roman_numerals_to_decimal("II") == 2);
    REQUIRE(roman_numerals_to_decimal("III") == 3);

    REQUIRE(roman_numerals_to_decimal("V") == 5);

    REQUIRE(roman_numerals_to_decimal("X") == 10);
    REQUIRE(roman_numerals_to_decimal("XX") == 20);
    REQUIRE(roman_numerals_to_decimal("XXX") == 30);

    REQUIRE(roman_numerals_to_decimal("L") == 50);

    REQUIRE(roman_numerals_to_decimal("C") == 100);
    REQUIRE(roman_numerals_to_decimal("CC") == 200);
    REQUIRE(roman_numerals_to_decimal("CCC") == 300);

    REQUIRE(roman_numerals_to_decimal("D") == 500);

    REQUIRE(roman_numerals_to_decimal("M") == 1000);
    REQUIRE(roman_numerals_to_decimal("MM") == 2000);
    REQUIRE(roman_numerals_to_decimal("MMM") == 3000);
}

TEST_CASE("Roman Numerals - Invalid", "[roman_numerals]") {
    REQUIRE(roman_numerals_to_decimal("G") == -1);

    REQUIRE(roman_numerals_to_decimal("i") == -1);

    REQUIRE(roman_numerals_to_decimal("IIII") == -1);

    REQUIRE(roman_numerals_to_decimal("VV") == -1);

    REQUIRE(roman_numerals_to_decimal("XXXX") == -1);

    REQUIRE(roman_numerals_to_decimal("LL") == -1);

    REQUIRE(roman_numerals_to_decimal("CCCC") == -1);

    REQUIRE(roman_numerals_to_decimal("DD") == -1);

    REQUIRE(roman_numerals_to_decimal("MMMM") == -1);
}
