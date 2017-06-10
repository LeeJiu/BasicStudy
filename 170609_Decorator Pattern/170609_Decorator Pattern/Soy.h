#pragma once
#include "CondimentDecorator.h"

class Soy : public CondimentDecorator
{
	Beverage* beverage;

public:
	Soy(Beverage* beverage)
	{
		this->beverage = beverage;
	}
	~Soy() {};

	std::string getDescription()
	{
		return beverage->getDescription() + ", ���";
	}

	double getCost()
	{
		return beverage->getCost() + 0.45;
	}
};
