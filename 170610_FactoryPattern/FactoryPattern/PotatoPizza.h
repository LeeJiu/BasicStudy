#pragma once
#include "Pizza.h"

class PotatoPizza : public Pizza
{
	std::string kind;			//����
	std::string foodStuffs;		//���
	double temperature;			//���¿µ�

public:
	PotatoPizza()
	{
		kind = "�������� ����";
		foodStuffs = "�а���, �丶�� �ҽ�, ��������, ������, ����, ��¥���� ġ��, ������";
		temperature = 270;
	}
	~PotatoPizza() {};

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