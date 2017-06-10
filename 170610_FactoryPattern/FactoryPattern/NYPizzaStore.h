#pragma once
#include "PizzaStore.h"
#include "NYStyleCheezePizza.h"
#include "NYStyleHawaianPizza.h"
#include "NYStylePotatoPizza.h"

class NYPizzaStore : public PizzaStore
{
public:
	NYPizzaStore() { std::cout << "�������� ���� ����" << std::endl; };
	~NYPizzaStore() 
	{
		if(pizza != NULL)
			delete pizza;
		std::cout << "�������� ���� ����" << std::endl; 
	};

	Pizza* createPizza(std::string item)
	{
		if (item == "Cheeze")
		{
			pizza = new NYStyleCheezePizza;
		}
		else if (item == "Potato")
		{
			pizza = new NYStylePotatoPizza;
		}
		else if (item == "Hawaian")
		{
			pizza = new NYStyleHawaianPizza;
		}
		else return NULL;

		return pizza;
	}
};