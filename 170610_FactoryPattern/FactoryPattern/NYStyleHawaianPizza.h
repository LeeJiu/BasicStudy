#pragma once
#include "Pizza.h"

class NYStyleHawaianPizza : public Pizza
{
	std::string kind;			//����
	std::string foodStuffs;		//���
	double temperature;			//���¿µ�

public:
	NYStyleHawaianPizza()
	{
		kind = "���� ǳ �Ͽ��̾� ����";
		foodStuffs = "�а���, ���� ��Ÿ�� �ҽ�, ���ξ���, ��¥���� ġ��";
		temperature = 300;
	}
	~NYStyleHawaianPizza() {};

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
		std::cout << temperature << "'C���� ��� ���´�." << std::endl;
	}

	void cut()
	{
		std::cout << "�ڸ���." << std::endl;
	}

	void box()
	{
		std::cout << "���� ��Ÿ�� ���� ����ڽ��� �����Ѵ�." << std::endl;
	}
};