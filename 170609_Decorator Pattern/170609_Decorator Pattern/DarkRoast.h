#pragma once
#include "Beverage.h"

class DarkRoast : public Beverage
{
public:
	DarkRoast()
	{
		description = "다크 로스팅 커피";
	}
	~DarkRoast() {};

	double getCost() { return 1.0; }
};
