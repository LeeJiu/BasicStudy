#pragma once
//#include "SimplePizzaFactory.h"
#include "Pizza.h"

class PizzaStore
{
protected:
	//SimplePizzaFactory* factory;	//심플팩토리
	Pizza* pizza;
	/*팩토리 메소드*/
	virtual Pizza* createPizza(std::string item) = 0;

public:
	//순수 가상함수를 포함한 클래스는 인스턴스화가 불가능.
	PizzaStore() { std::cout << "피자가게 오픈" << std::endl; }
	//심플팩토리
	//PizzaStore(SimplePizzaFactory* factory)
	//{
	//	this->factory = factory;		
	//	std::cout << "피자가게 오픈" << std::endl;
	//}
	virtual ~PizzaStore()
	{
		//delete pizza;
		std::cout << "피자가게 닫음" << std::endl;
	};

	virtual Pizza* orderPizza(std::string kind)
	{
		//pizza = factory->CreatePizza(kind);		심플팩토리
		pizza = createPizza(kind);

		if (pizza != NULL)
		{
			pizza->pizzaKind();
			pizza->prepare();
			pizza->bake();
			pizza->cut();
			pizza->box();
		}
		else std::cout << "해당 종류의 피자는 없습니다." << std::endl;

		return pizza;
	}
};
