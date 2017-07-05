#include "cFlonne.h"



cFlonne::cFlonne()
{
	m_pAttack = new cSwordAttack();
}


cFlonne::~cFlonne()
{
	delete m_pAttack;
}

void cFlonne::Display()
{
	std::cout << "Show Flonne!" << std::endl;
}

void cFlonne::Attack()
{
	m_pAttack->Attack();
}