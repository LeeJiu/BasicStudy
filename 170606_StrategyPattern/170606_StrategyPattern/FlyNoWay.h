#pragma once
#include "FlyBehavior.h"
#include <iostream>

class FlyNoWay : public FlyBehavior
{
public:
	FlyNoWay() {};
	~FlyNoWay() {};

	void fly() { std::cout << "난 날수없어" << std::endl; }
}; 

