#pragma once
#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
	HouseBlend() 
	{
		description = "�Ͽ콺 ���� Ŀ��";
	}
	~HouseBlend() {};
	
	double getCost() { return 0.98; }
};