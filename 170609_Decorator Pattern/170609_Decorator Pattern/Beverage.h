#pragma once
#include <iostream>
#include <string>

//�߻�Ŭ����(�������̽�) - ���� �����Լ��� ������ Ŭ������ �ν��Ͻ�ȭ �� �� ����
//���� Ÿ Ŭ�������� �ش� ����������� �� �����ͷ� �����ؼ� ����ؾ� �Ѵ�
class Beverage
{
public:
	std::string description = "���� ����";

	Beverage() {};
	~Beverage() {};

	//���� ����
	virtual std::string getDescription()	{ return description; }
	//����
	virtual double getCost() = 0;
};

