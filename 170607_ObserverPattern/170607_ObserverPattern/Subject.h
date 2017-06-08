#pragma once
#include "Observer.h"

//��ü �������̽�
class Subject
{
public:
	Subject() {};
	~Subject() {};

	virtual void registObserver(Observer* observer) = 0;	//������ �߰�
	virtual void deleteObserver(Observer* observer) = 0;		//������ ����
	virtual void notifyObservers() = 0;						//��������
};

