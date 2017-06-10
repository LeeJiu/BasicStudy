#pragma once
#include "Beverage.h"

//토핑, 첨가물
class CondimentDecorator : public Beverage
{
public:
	CondimentDecorator() {};
	~CondimentDecorator() {};

	//첨가물 데코레이터에서 새로 구현하도록.
	std::string getDescription() = 0;
};

