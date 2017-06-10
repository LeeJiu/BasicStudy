#pragma once
#include "Pizza.h"

class HawaianPizza : public Pizza
{
	std::string kind;			//����
	std::string foodStuffs;		//���
	double temperature;			//���¿µ�

public:
	HawaianPizza()
	{
		kind = "�Ͽ��̾� ����";
		foodStuffs = "�а���, �丶�� �ҽ�, ���ξ���, ��¥���� ġ��";
		temperature = 300;
	}
	~HawaianPizza() {};

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
		std::cout << temperature << "'C���� ���´�." << std::endl;
	}

	void cut()
	{
		std::cout << "�ڸ���." << std::endl;
	}

	void box()
	{
		std::cout << "�����Ѵ�." << std::endl;
	}
};