#include "cPrinny.h"



cPrinny::cPrinny()
{
	m_pAttack = new cSpearAttack();
}


cPrinny::~cPrinny()
{
	delete m_pAttack;
}

void cPrinny::Display()
{
	std::cout << "Show Prinny" << std::endl;
}

void cPrinny::Attack()
{
	m_pAttack->Attack();
}