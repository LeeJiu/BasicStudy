#pragma once
#include <iostream>
#include <string>

//���� �������̽�
class Pizza
{
public:
	Pizza() {};
	~Pizza() {};

	virtual void pizzaKind() = 0;
	virtual void prepare() =0;
	virtual void bake() = 0;
	virtual void cut() = 0;
	virtual void box() = 0;
};