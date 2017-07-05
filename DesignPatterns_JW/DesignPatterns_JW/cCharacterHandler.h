#pragma once
#include "cPrinny.h"
#include "cFlonne.h"

class cCharacterHandler
{
private:
	cCharacter* m_pCharacter;

public:
	cCharacterHandler();
	~cCharacterHandler();

	void SelectCharacter();
	void SelectOrder();
	void ChangeWeapon();
};

