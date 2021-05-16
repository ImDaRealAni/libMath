#pragma once
#include "Shape.h"

class Square : public Shape
{
	int side;

public:
	Square(int side_length)
		: side(side_length)
	{}

	int Perimeter() final override
	{
		return side * 4;
	}

	int Area() final override
	{
		return side * side;
	}
};