#pragma once
#include "PizzaStore.h"
#include "ChicagoStyleCheezePizza.h"
#include "ChicagoStyleHawaianPizza.h"
#include "ChicagoStylePotatoPizza.h"

class ChicagoPizzaStore : public PizzaStore
{
public:
	ChicagoPizzaStore() { std::cout << "��ī������ ���� ����" << std::endl; };
	~ChicagoPizzaStore() 
	{ 
		if (pizza != NULL)
			delete pizza;
		std::cout << "��ī������ ���� ����" << std::endl; 
	};

	Pizza* createPizza(std::string item)
	{
		if (item == "Cheese")
		{
			pizza = new ChicagoStyleCheezePizza;
		}
		else if (item == "Potato")
		{
			pizza = new ChicagoStylePotatoPizza;
		}
		else if (item == "Hawaian")
		{
			pizza = new ChicagoStyleHawaianPizza;
		}
		else return NULL;

		return pizza;
	}
};