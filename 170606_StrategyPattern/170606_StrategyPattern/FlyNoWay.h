#pragma once
#include "FlyBehavior.h"
#include <iostream>

class FlyNoWay : public FlyBehavior
{
public:
	FlyNoWay() {};
	~FlyNoWay() {};

	void fly() { std::cout << "�� ��������" << std::endl; }
}; 
