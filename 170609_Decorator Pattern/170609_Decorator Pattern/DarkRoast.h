#pragma once
#include "Beverage.h"

class DarkRoast : public Beverage
{
public:
	DarkRoast()
	{
		description = "��ũ �ν��� Ŀ��";
	}
	~DarkRoast() {};

	double getCost() { return 1.0; }
};
