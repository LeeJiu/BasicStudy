#pragma once
#include "Pizza.h"

class NYStyleCheezePizza : public Pizza
{
	std::string kind;			//����
	std::string foodStuffs;		//���
	double temperature;			//���¿µ�

public:
	NYStyleCheezePizza()
	{
		kind = "���� ǳ ġ�� ����";
		foodStuffs = "�а���, ���� ��Ÿ�� �ҽ�, ü�� ġ��, ��¥���� ġ��, ������";
		temperature = 300;
	}
	~NYStyleCheezePizza() {};

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