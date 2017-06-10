#pragma once
#include "Espresso.h"
#include "DarkRoast.h"
#include "Decaf.h"
#include "HouseBlend.h"

#include "Mocha.h"
#include "Whip.h"
#include "Soy.h"

void main()
{
	Beverage* beverage = new Espresso;		//1.99
	std::cout << beverage->getDescription() << " $" << beverage->getCost() << std::endl;

	Beverage* beverage2 = new DarkRoast;	//+1.0
	beverage2 = new Mocha(beverage2);		//+0.2
	beverage2 = new Mocha(beverage2);		//+0.2
	beverage2 = new Whip(beverage2);		//+0.5
	std::cout << beverage2->getDescription() << " $" << beverage2->getCost() << std::endl;

	Beverage* beverage3 = new HouseBlend;	//+0.98
	beverage3 = new Mocha(beverage3);		//+0.2
	beverage3 = new Soy(beverage3);			//+0.45
	std::cout << beverage3->getDescription() << " $" << beverage3->getCost() << std::endl;

	Beverage* beverage4 = new Espresso;		//+1.99
	beverage4 = new Mocha(beverage4);		//+0.2
	beverage4 = new Soy(beverage4);			//+0.45
	beverage4 = new Whip(beverage4);		//+0.5
	std::cout << beverage4->getDescription() << " $" << beverage4->getCost() << std::endl;

	std::cout << std::endl;

	delete beverage;
	delete beverage2;
	delete beverage3;
	delete beverage4;
}