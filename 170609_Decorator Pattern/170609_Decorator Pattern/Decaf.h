#pragma once
#include "Beverage.h"

class Decaf : public Beverage
{
public:
	Decaf()
	{
		description = "ī���� ��÷��";
	}
	~Decaf() {};
	
	double getCost() { return 1.55; }
};