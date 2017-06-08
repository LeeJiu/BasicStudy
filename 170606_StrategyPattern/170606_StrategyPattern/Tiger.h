#pragma once
#include <iostream>

#include "Animal.h"
#include "TigerCry.h"
#include "FlyNoWay.h"

class Tiger : public Animal
{
	
public:
	Tiger()
	{
		aniSound = new TigerCry();
		flyAction = new FlyNoWay();
	};

	~Tiger()
	{
		delete aniSound;
		delete flyAction;
	};

	void PerformSound() { aniSound->makeSound(); }
	void PerformFly() { flyAction->fly(); }
	void Display() { std::cout << "´Æ¸§ÇÏ°í ¸ÚÀÖ´Â È£¶ûÀÌ." << std::endl; }
};

