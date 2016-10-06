#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/print_hello_world.h"

TEST_CASE( "Palindrome is checked", "[palindrome]" ) {
    REQUIRE( is_palindrome("abcba") == true );
    REQUIRE( is_palindrome("abccba") == true );
    REQUIRE( is_palindrome("dog") == false );
}
