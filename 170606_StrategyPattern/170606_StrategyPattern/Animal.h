#pragma once
#include "MakeSound.h"
#include "FlyBehavior.h"

class Animal
{
protected:
	MakeSound* aniSound;		//MakeSound aniSound -> ���� �����Լ��̱� ������ ���������� �ȵ�
	FlyBehavior* flyAction;		//�����ͷ� ���� �� ����

public:
	Animal();
	~Animal();

	virtual void PerformSound() = 0;
	virtual void PerformFly() = 0;
	virtual void Display() = 0;
};

