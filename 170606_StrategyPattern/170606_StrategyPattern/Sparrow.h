#pragma once
#include <iostream>

#include "Animal.h"
#include "FlyWithWings.h"
#include "BirdCry.h"

class Sparrow : public Animal
{
public:
	Sparrow()
	{
		aniSound = new BirdCry();
		flyAction = new FlyWithWings();
	};
	~Sparrow()
	{
		delete aniSound;
		delete flyAction;
	};

	void PerformSound() { aniSound->makeSound(); }
	void PerformFly() { flyAction->fly(); }
	void Display() { std::cout << "귀여운 작은 참새." << std::endl; }
};

