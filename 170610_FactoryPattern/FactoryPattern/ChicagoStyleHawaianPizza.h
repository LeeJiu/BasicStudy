#pragma once
#include "Pizza.h"

class ChicagoStyleHawaianPizza : public Pizza
{
	std::string kind;			//����
	std::string foodStuffs;		//���
	double temperature;			//���¿µ�

public:
	ChicagoStyleHawaianPizza()
	{
		kind = "��ī�� ǳ �Ͽ��̾� ����";
		foodStuffs = "�а���, �丶�� �ҽ�, ���ξ���, ��¥���� ġ��, ���� ġ��";
		temperature = 300;
	}
	~ChicagoStyleHawaianPizza() {};

	void pizzaKind()
	{
		std::cout << "���� ���� : " << this->kind << "." << std::endl;
	}

	void prepare()
	{
		std::cout << "��� : " << foodStuffs << "." << std::endl;
	}

	void bake()
	{
		std::cout << temperature << "'C�� ���쿡 �β��� ���´�." << std::endl;
	}

	void cut()
	{
		std::cout << "�ڸ���." << std::endl;
	}

	void box()
	{
		std::cout << "��ī�� ��Ÿ�� ���� ����ڽ��� �����Ѵ�." << std::endl;
	}
};