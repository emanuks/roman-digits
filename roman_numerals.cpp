/*******************************************************
* Copyright (C) 2024 emanuks <emanuels313@gmail.com>
*
* This file is part of roman-numerals.
*
* roman-numerals can not be copied and/or distributed without the express
* permission of emanuks
*******************************************************/

#include <string>
#include <algorithm>

#include "./roman_numerals.hpp"

int get_roman_numeral_value(char numeral) {
    switch (numeral) {
         case 'I': return 1;
         case 'V': return 5;
         case 'X': return 10;
         case 'L': return 50;
         case 'C': return 100;
         case 'D': return 500;
         case 'M': return 1000;
    }

    return -1;
}

int roman_numerals_to_decimal(std::string roman_numerals) {
    int decimal = 0;
    std::reverse(roman_numerals.begin(), roman_numerals.end());

    std::string::iterator c;
    for (c = roman_numerals.begin(); c != roman_numerals.end(); ++c) {
        int current_value = get_roman_numeral_value(*c);
        if (current_value == -1) {
            return -1;
        } else {
            decimal += current_value;
        }
    }

    return decimal;
}
