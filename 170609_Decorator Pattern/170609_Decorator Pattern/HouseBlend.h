#pragma once
#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
	HouseBlend() 
	{
		description = "하우스 블렌드 커피";
	}
	~HouseBlend() {};
	
	double getCost() { return 0.98; }
};