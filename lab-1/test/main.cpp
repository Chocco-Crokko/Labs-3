#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/print_hello_world.h"
#include <string>

bool is_palindrome(const std::string &str)
{
	for (auto beg = str.begin(), end = str.end() - 1; beg < end; ++beg, --end)
		if (*beg != *end) 
			return false;
	return true;
}

TEST_CASE( "Palindrome is checked", "[palindrome]" ) {
    REQUIRE( is_palindrome("abcba") == true );
    REQUIRE( is_palindrome("abccba") == true );
    REQUIRE( is_palindrome("dog") == false );
}
