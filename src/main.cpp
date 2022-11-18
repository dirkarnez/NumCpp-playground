#include "NumCpp.hpp"
#include <iostream>

int main()
{
	// [[1, 3, 5, 7, 10, ]]
	auto a = nc::linspace(1, 10, 5);
	std::cout << a << std::endl;
    return 0;
}