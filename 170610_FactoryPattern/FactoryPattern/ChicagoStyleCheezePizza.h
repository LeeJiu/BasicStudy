#pragma once
#include "Pizza.h"

class ChicagoStyleCheezePizza : public Pizza
{
	std::string kind;			//����
	std::string foodStuffs;		//���
	double temperature;			//���¿µ�

public:
	ChicagoStyleCheezePizza()
	{
		kind = "��ī�� ǳ ġ�� ����";
		foodStuffs = "�а���, �丶�� �ҽ�, ü�� ġ��, ��¥���� ġ��, Ʈ���� ġ��, ������";
		temperature = 300;
	}
	~ChicagoStyleCheezePizza() {};

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