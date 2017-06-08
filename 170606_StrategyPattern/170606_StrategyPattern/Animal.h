#pragma once
#include "MakeSound.h"
#include "FlyBehavior.h"

class Animal
{
protected:
	MakeSound* aniSound;		//MakeSound aniSound -> 순수 가상함수이기 때문에 변수선언이 안됨
	FlyBehavior* flyAction;		//포인터로 선언 후 접근

public:
	Animal();
	~Animal();

	virtual void PerformSound() = 0;
	virtual void PerformFly() = 0;
	virtual void Display() = 0;
};

