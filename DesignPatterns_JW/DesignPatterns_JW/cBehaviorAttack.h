#pragma once
#include <iostream>

class cBehaviorAttack
{
public:
	cBehaviorAttack();
	virtual ~cBehaviorAttack();

	virtual void Attack() = 0;
};

