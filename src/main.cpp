#include <iostream>
#include "NumCpp.hpp"

int main()
{
	// [[1, 3, 5, 7, 10, ]]
	const nc::NdArray<int> a = nc::linspace(1, 10, 5);
	std::cout << a << std::endl;
	std::cout << a.at(0) << std::endl;
	std::cin.get();
	return 0;
}