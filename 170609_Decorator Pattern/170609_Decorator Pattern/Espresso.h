#pragma once
#include "Beverage.h"

class Espresso : public Beverage
{
public:
	Espresso()
	{
		description = "에스프레소";
	};
	~Espresso() {};

	double getCost() { return 1.99; }
};

