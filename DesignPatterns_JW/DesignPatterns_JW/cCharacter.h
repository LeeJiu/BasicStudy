#pragma once
#include "cSpearAttack.h"
#include "cSwordAttack.h"
#include "cStaffAttack.h"

class cCharacter
{
protected:
	cBehaviorAttack* m_pAttack;

public:
	cCharacter();
	virtual ~cCharacter();

	virtual void Display() = 0;
	virtual void Attack() = 0;

	//���⸦ �����Ѵ�.
	void SetBehaviorAttack(cBehaviorAttack* pWeapon)
	{
		delete m_pAttack;
		m_pAttack = pWeapon;
	}
};

