#pragma once
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
	//���̽� ����
	Beverage* beverage;

public:
	Mocha(Beverage* beverage)
	{
		this->beverage = beverage;
	}
	~Mocha() {};

	std::string getDescription()
	{
		return beverage->getDescription() + ", ��ī";
	}

	double getCost()
	{
		return beverage->getCost() + 0.2;	//0.2�� ��ī ���ΰ���
	}
};