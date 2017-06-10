#pragma once
#include "Pizza.h"

class ChicagoStylePotatoPizza : public Pizza
{
	std::string kind;			//����
	std::string foodStuffs;		//���
	double temperature;			//���¿µ�

public:
	ChicagoStylePotatoPizza()
	{
		kind = "��ī�� ǳ �������� ����";
		foodStuffs = "�а���, �丶�� �ҽ�, ��������, ������, ����, ��¥���� ġ��, ���� ġ��, ������";
		temperature = 270;
	}
	~ChicagoStylePotatoPizza() {};

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