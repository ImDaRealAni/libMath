#include <iostream>
#include "libmath.h"

int main()
{
	Square square1(5);
	std::cout << "Perimeter: " << square1.Perimeter() << std::endl << "Area: " << square1.Area() << std::endl;

	std::cin.get();
}