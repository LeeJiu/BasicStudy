#pragma once
#include "Beverage.h"

class Espresso : public Beverage
{
public:
	Espresso()
	{
		description = "����������";
	};
	~Espresso() {};

	double getCost() { return 1.99; }
};

