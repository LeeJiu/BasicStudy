#include "cSpearAttack.h"



cSpearAttack::cSpearAttack()
{
}


cSpearAttack::~cSpearAttack()
{
}

void cSpearAttack::Attack()
{
	//공격하는 형태를 변경할 수 있다.
	//std::cout << "Spear Attack!" << std::endl;

	//Spear를 사용한 Attack을 변경한다.
	//Spear의 Attack()만 변경하면
	//Spear를 가진 캐릭터들의 모든 Attack이 변경된다.
	std::cout << "=========Pierce With Spear!=========" << std::endl;
}
