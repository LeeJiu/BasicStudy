#pragma once
#include "CheezePizza.h"
#include "PotatoPizza.h"
#include "HawaianPizza.h"

class SimplePizzaFactory
{
public:
	SimplePizzaFactory() { std::cout << "공장 시작" << std::endl; };
	~SimplePizzaFactory() { std::cout << "공장 종료" << std::endl; };

	Pizza* CreatePizza(std::string pizzaKind)
	{
		Pizza* pizza = NULL;

		if (pizzaKind == "Cheeze")
		{
			pizza = new CheezePizza;
		}
		else if (pizzaKind == "Potato")
		{
			pizza = new PotatoPizza;
		}
		else if (pizzaKind == "Hawaian")
		{
			pizza = new HawaianPizza;
		}
		else return NULL;

		return pizza;
	}
};