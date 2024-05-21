#include <iostream>
#include "includes\utils.hpp"
#include "includes\iter.hpp"

int main( void ) {
	int array[4] = {0, 2, 4, 8};
    std::string	man[4] = {"bruh", "bro", "brother", "boy"};
    iter::iter<std::string>(man, 4, iter::show);
    iter::iter<int>(array, 4, iter::show);
}