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

    REQUIRE(roman_numerals_to_decimal("IV") == 4);
    REQUIRE(roman_numerals_to_decimal("V") == 5);
    REQUIRE(roman_numerals_to_decimal("VI") == 6);

    REQUIRE(roman_numerals_to_decimal("IX") == 9);
    REQUIRE(roman_numerals_to_decimal("X") == 10);
    REQUIRE(roman_numerals_to_decimal("XX") == 20);
    REQUIRE(roman_numerals_to_decimal("XXX") == 30);
    REQUIRE(roman_numerals_to_decimal("XXXI") == 31);
    REQUIRE(roman_numerals_to_decimal("XXXV") == 35);
    REQUIRE(roman_numerals_to_decimal("XXXVI") == 36);

    REQUIRE(roman_numerals_to_decimal("XL") == 40);
    REQUIRE(roman_numerals_to_decimal("XLIX") == 49);
    REQUIRE(roman_numerals_to_decimal("L") == 50);
    REQUIRE(roman_numerals_to_decimal("LI") == 51);
    REQUIRE(roman_numerals_to_decimal("LV") == 55);
    REQUIRE(roman_numerals_to_decimal("LX") == 60);
    REQUIRE(roman_numerals_to_decimal("LXV") == 65);
    REQUIRE(roman_numerals_to_decimal("LXVI") == 66);

    REQUIRE(roman_numerals_to_decimal("XC") == 90);
    REQUIRE(roman_numerals_to_decimal("XCIX") == 99);
    REQUIRE(roman_numerals_to_decimal("C") == 100);
    REQUIRE(roman_numerals_to_decimal("XCXL") == 130);
    REQUIRE(roman_numerals_to_decimal("XCXLIX") == 139);
    REQUIRE(roman_numerals_to_decimal("CC") == 200);
    REQUIRE(roman_numerals_to_decimal("CCC") == 300);
    REQUIRE(roman_numerals_to_decimal("CCCI") == 301);
    REQUIRE(roman_numerals_to_decimal("CCCV") == 305);
    REQUIRE(roman_numerals_to_decimal("CCCX") == 310);
    REQUIRE(roman_numerals_to_decimal("CCCL") == 350);
    REQUIRE(roman_numerals_to_decimal("CCCLX") == 360);
    REQUIRE(roman_numerals_to_decimal("CCCLXV") == 365);
    REQUIRE(roman_numerals_to_decimal("CCCLXVI") == 366);

    REQUIRE(roman_numerals_to_decimal("CD") == 400);
    REQUIRE(roman_numerals_to_decimal("CDXL") == 440);
    REQUIRE(roman_numerals_to_decimal("CDXLIX") == 449);
    REQUIRE(roman_numerals_to_decimal("D") == 500);
    REQUIRE(roman_numerals_to_decimal("DI") == 501);
    REQUIRE(roman_numerals_to_decimal("DV") == 505);
    REQUIRE(roman_numerals_to_decimal("DX") == 510);
    REQUIRE(roman_numerals_to_decimal("DL") == 550);
    REQUIRE(roman_numerals_to_decimal("DC") == 600);
    REQUIRE(roman_numerals_to_decimal("DCL") == 650);
    REQUIRE(roman_numerals_to_decimal("DCLX") == 660);
    REQUIRE(roman_numerals_to_decimal("DCLXV") == 665);
    REQUIRE(roman_numerals_to_decimal("DCLXVI") == 666);

    REQUIRE(roman_numerals_to_decimal("CM") == 900);
    REQUIRE(roman_numerals_to_decimal("CMXC") == 990);
    REQUIRE(roman_numerals_to_decimal("CMXCIX") == 999);
    REQUIRE(roman_numerals_to_decimal("M") == 1000);
    REQUIRE(roman_numerals_to_decimal("CMCD") == 1300);
    REQUIRE(roman_numerals_to_decimal("CMCDXC") == 1390);
    REQUIRE(roman_numerals_to_decimal("CMCDXCXL") == 1430);
    REQUIRE(roman_numerals_to_decimal("CMCDXCXLIX") == 1439);
    REQUIRE(roman_numerals_to_decimal("MM") == 2000);
    REQUIRE(roman_numerals_to_decimal("MMM") == 3000);
    REQUIRE(roman_numerals_to_decimal("MMMI") == 3001);
    REQUIRE(roman_numerals_to_decimal("MMMV") == 3005);
    REQUIRE(roman_numerals_to_decimal("MMMX") == 3010);
    REQUIRE(roman_numerals_to_decimal("MMML") == 3050);
    REQUIRE(roman_numerals_to_decimal("MMMC") == 3100);
    REQUIRE(roman_numerals_to_decimal("MMMD") == 3500);
    REQUIRE(roman_numerals_to_decimal("MMMDC") == 3600);
    REQUIRE(roman_numerals_to_decimal("MMMDCL") == 3650);
    REQUIRE(roman_numerals_to_decimal("MMMDCLX") == 3660);
    REQUIRE(roman_numerals_to_decimal("MMMDCLXV") == 3665);
    REQUIRE(roman_numerals_to_decimal("MMMDCLXVI") == 3666);
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

    REQUIRE(roman_numerals_to_decimal("VX") == -1);
    REQUIRE(roman_numerals_to_decimal("LC") == -1);
    REQUIRE(roman_numerals_to_decimal("DM") == -1);
    REQUIRE(roman_numerals_to_decimal("IL") == -1);
    REQUIRE(roman_numerals_to_decimal("IC") == -1);
    REQUIRE(roman_numerals_to_decimal("ID") == -1);
    REQUIRE(roman_numerals_to_decimal("IM") == -1);
    REQUIRE(roman_numerals_to_decimal("XD") == -1);
    REQUIRE(roman_numerals_to_decimal("XM") == -1);

    REQUIRE(roman_numerals_to_decimal("IIV") == -1);
    REQUIRE(roman_numerals_to_decimal("IIX") == -1);
    REQUIRE(roman_numerals_to_decimal("IIL") == -1);
    REQUIRE(roman_numerals_to_decimal("IIC") == -1);
    REQUIRE(roman_numerals_to_decimal("IID") == -1);
    REQUIRE(roman_numerals_to_decimal("IIM") == -1);
    REQUIRE(roman_numerals_to_decimal("IXL") == -1);
    REQUIRE(roman_numerals_to_decimal("XXL") == -1);
    REQUIRE(roman_numerals_to_decimal("XXC") == -1);
    REQUIRE(roman_numerals_to_decimal("XXD") == -1);
    REQUIRE(roman_numerals_to_decimal("XXM") == -1);
    REQUIRE(roman_numerals_to_decimal("CCD") == -1);
    REQUIRE(roman_numerals_to_decimal("CCM") == -1);
}
