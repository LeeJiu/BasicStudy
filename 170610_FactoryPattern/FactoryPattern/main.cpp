#pragma once
#include "PizzaStore.h"
#include "SimplePizzaFactory.h"
#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"

void main()
{
	///*���� ���丮 ����*/
	////new�� �����Ҵ����� ������ �ν��Ͻ�ȭ�� ���� �ʱ� ������ �����ڰ� ȣ����� �ʾ� ����x?
	////new�� �����Ҵ��ΰ����� �ν��Ͻ�ȭ�� �ƴ����ʴ°� ? ã�ƺ���
	//SimplePizzaFactory* factory = new SimplePizzaFactory;
	//PizzaStore* store = new PizzaStore(factory);
	//
	//std::cout << std::endl;
	//
	////�����Ҵ��� �̹����ְ��մ�.
	//Pizza* pizza = store->orderPizza("Potato");
	//std::cout << std::endl;
	//
	//Pizza* pizza2 = store->orderPizza("Hawaian");
	//std::cout << std::endl;
	//
	//Pizza* pizza3 = store->orderPizza("Cheeze");
	//std::cout << std::endl;
	//
	//delete factory;
	//delete store;

	/*���丮 �޼ҵ� ����*/
	//���� Ŭ���� ���� ������ public�� �����ڸ� ��������****(�ڲٱ����)
	PizzaStore* nyPizzaStore = new NYPizzaStore;
	PizzaStore* chPizzaStore = new ChicagoPizzaStore;

	std::cout << std::endl;

	//����.
	std::cout << "���� ���� ������" << std::endl;
	Pizza* pizza = nyPizzaStore->orderPizza("Potato");
	std::cout << std::endl;

	Pizza* pizza2 = nyPizzaStore->orderPizza("Hawaian");
	std::cout << std::endl;

	Pizza* pizza3 = nyPizzaStore->orderPizza("Cheeze");
	std::cout << std::endl;

	//��ī��
	std::cout << "��ī�� ���� ������" << std::endl;
	Pizza* pizza4 = chPizzaStore->orderPizza("Potato");
	std::cout << std::endl;

	Pizza* pizza5 = chPizzaStore->orderPizza("Hawaian");
	std::cout << std::endl;

	Pizza* pizza6 = chPizzaStore->orderPizza("Cheeze");
	std::cout << std::endl;

	delete nyPizzaStore;
	delete chPizzaStore;

	//������ Ŭ������ store(creator)�� 
	//��ǰ Ŭ������ pizza(product)�� ���еȴ�
	//�� �� ������ Ŭ������ ���� ����Ŭ���� ���������� ���´�.
	//�Ϻ� �߻�Ŭ������ ���ڰ��Ը� ���������μ� ���丮 �޼ҵ�� ĸ��ȭ�� �־� �ٽ����̴�
}