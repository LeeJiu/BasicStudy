#pragma once
#include "Pizza.h"

class NYStylePotatoPizza : public Pizza
{
	std::string kind;			//����
	std::string foodStuffs;		//���
	double temperature;			//���¿µ�

public:
	NYStylePotatoPizza()
	{
		kind = "���� ǳ �������� ����";
		foodStuffs = "�а���, ���� ��Ÿ�� �ҽ�, ��������, ������, ����, ��¥���� ġ��, ������";
		temperature = 270;
	}
	~NYStylePotatoPizza() {};

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