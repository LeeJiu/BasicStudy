#pragma once
#include "CondimentDecorator.h"

class Whip : public CondimentDecorator
{
	Beverage* beverage;
public:
	Whip(Beverage* beverage)
	{
		this->beverage = beverage;
	}
	~Whip() {};

	std::string getDescription()
	{
		return beverage->getDescription() + ", ÈÖÇÎÅ©¸²";
	}

	double getCost()
	{
		return beverage->getCost() + 0.5;
	}

};