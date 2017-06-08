#pragma once
#include <iostream>
#include <string>

//������(������) �������̽�
class Observer
{
public:
	Observer() {};
	~Observer() {};
	
	virtual void update(float temp, float humidity, float pressure) = 0;	//�µ�, ����, �������
	virtual void unFollow() = 0;
};

