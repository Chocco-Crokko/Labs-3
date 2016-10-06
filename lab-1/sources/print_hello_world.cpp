#include "../include/print_hello_world.h"
#include <iostream>
#include <string>

void print_hello_world() {
	std::cout << "Hello, World!" << std::endl;
}

bool is_palindrome(const std::string &str)
{
	for (auto beg = str.begin(), end = str.end() - 1; beg < end; ++beg, --end)
		if (*beg != *end) 
			return false;
	return true;
}