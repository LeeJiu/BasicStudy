#pragma once
#include "cBehaviorAttack.h"

class cSwordAttack : public cBehaviorAttack
{
public:
	cSwordAttack();
	~cSwordAttack();

	void Attack() override;
};

