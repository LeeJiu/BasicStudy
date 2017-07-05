#pragma once
#include "cBehaviorAttack.h"

class cSpearAttack : public cBehaviorAttack
{
public:
	cSpearAttack();
	~cSpearAttack();

	void Attack() override;
};

