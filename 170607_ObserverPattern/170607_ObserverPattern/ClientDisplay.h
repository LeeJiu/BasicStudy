#pragma once
#include <string>

#include "Observer.h"
#include "WeatherData.h"

class ClientDisplay : public Observer
{
private:
	std::string name;
	float temp, humidity, pressure;
	Subject* sub;

public:
	ClientDisplay(std::string name, Subject* sub) : name(name)
	{
		//����� �����ڿ���
		this->sub = sub;
		this->sub->registObserver(this);
	};
	~ClientDisplay() {};

	void update(float temp, float humidity, float pressure)
	{
		this->temp = temp;
		this->humidity = humidity;
		this->pressure = pressure;
		display();
	}

	void unFollow()
	{
		sub->deleteObserver(this);
		this->sub = NULL;
	}

	void setName(std::string name)
	{
		this->name = name;
	}

	void display()
	{
		std::cout << "---" << name << "���� ��������---" << std::endl;
		std::cout << "----------------------------" << std::endl;
		std::cout << "��� : " << temp << std::endl;
		std::cout << "���� : " << humidity << std::endl;
		std::cout << "��� : " << pressure << std::endl;
		std::cout << "----------------------------" << std::endl;
	}
};

