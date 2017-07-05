#pragma once
#include "cBehaviorAttack.h"

class cStaffAttack : public cBehaviorAttack
{
public:
	cStaffAttack();
	~cStaffAttack();

	void Attack() override;
};

