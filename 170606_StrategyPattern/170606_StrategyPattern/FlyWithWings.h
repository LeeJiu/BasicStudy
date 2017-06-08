#pragma once
#include "FlyBehavior.h"
#include <iostream>

class FlyWithWings : public FlyBehavior 
{
public:
	FlyWithWings() {};
	~FlyWithWings() {};

	void fly() { std::cout << "날개로 난다" << std::endl; }
};

