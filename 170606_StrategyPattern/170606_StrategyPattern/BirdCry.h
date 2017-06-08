#pragma once
#include "MakeSound.h"
#include <iostream>

class BirdCry : public MakeSound
{
public:
	BirdCry() {};
	~BirdCry() {};

	void makeSound() { std::cout << "Â±¤‹" << std::endl; }
};

