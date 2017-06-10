#pragma once
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
	//베이스 음료
	Beverage* beverage;

public:
	Mocha(Beverage* beverage)
	{
		this->beverage = beverage;
	}
	~Mocha() {};

	std::string getDescription()
	{
		return beverage->getDescription() + ", 모카";
	}

	double getCost()
	{
		return beverage->getCost() + 0.2;	//0.2이 모카 토핑가격
	}
};