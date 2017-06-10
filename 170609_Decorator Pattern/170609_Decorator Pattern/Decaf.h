#pragma once
#include "Beverage.h"

class Decaf : public Beverage
{
public:
	Decaf()
	{
		description = "카페인 무첨가";
	}
	~Decaf() {};
	
	double getCost() { return 1.55; }
};