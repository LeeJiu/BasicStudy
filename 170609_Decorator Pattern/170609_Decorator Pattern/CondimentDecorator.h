#pragma once
#include "Beverage.h"

//����, ÷����
class CondimentDecorator : public Beverage
{
public:
	CondimentDecorator() {};
	~CondimentDecorator() {};

	//÷���� ���ڷ����Ϳ��� ���� �����ϵ���.
	std::string getDescription() = 0;
};

