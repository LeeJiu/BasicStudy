#pragma once
#include "MakeSound.h"
#include <iostream>

class TigerCry : public MakeSound
{
public:
	TigerCry() {};
	~TigerCry() {};

	void makeSound() { std::cout << "����" << std::endl; }
};

