#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roman_numerals.hpp"


TEST_CASE( "Roman Numerals - Valid", "[roman_numerals]" ) {
    REQUIRE( roman_numerals_to_decimal("I") == 1 );
    
    REQUIRE( roman_numerals_to_decimal("V") == 5 );
}




TEST_CASE( "Roman Numerals - Invalid", "[roman_numerals]" ) {
    REQUIRE( roman_numerals_to_decimal("G") == -1 );
    
    REQUIRE( roman_numerals_to_decimal("i") == -1 );
}
 
