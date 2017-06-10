#pragma once
//#include "SimplePizzaFactory.h"
#include "Pizza.h"

class PizzaStore
{
protected:
	//SimplePizzaFactory* factory;	//�������丮
	Pizza* pizza;
	/*���丮 �޼ҵ�*/
	virtual Pizza* createPizza(std::string item) = 0;

public:
	//���� �����Լ��� ������ Ŭ������ �ν��Ͻ�ȭ�� �Ұ���.
	PizzaStore() { std::cout << "���ڰ��� ����" << std::endl; }
	//�������丮
	//PizzaStore(SimplePizzaFactory* factory)
	//{
	//	this->factory = factory;		
	//	std::cout << "���ڰ��� ����" << std::endl;
	//}
	virtual ~PizzaStore()
	{
		//delete pizza;
		std::cout << "���ڰ��� ����" << std::endl;
	};

	virtual Pizza* orderPizza(std::string kind)
	{
		//pizza = factory->CreatePizza(kind);		�������丮
		pizza = createPizza(kind);

		if (pizza != NULL)
		{
			pizza->pizzaKind();
			pizza->prepare();
			pizza->bake();
			pizza->cut();
			pizza->box();
		}
		else std::cout << "�ش� ������ ���ڴ� �����ϴ�." << std::endl;

		return pizza;
	}
};
