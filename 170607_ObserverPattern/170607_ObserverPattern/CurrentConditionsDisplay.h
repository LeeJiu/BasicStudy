#pragma once
#include "Observer.h"
#include "WeatherData.h"

class CurrentConditionsDisplay : public Observer
{
private:
	float temp, humidity, pressure;
	Subject* sub;

public:
	CurrentConditionsDisplay(Subject* sub)
	{
		this->sub = sub;
		this->sub->registObserver(this);
	};
	~CurrentConditionsDisplay() {};

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

	void display()
	{
		std::cout << "--------���� �������--------" << std::endl;
		std::cout << "----------------------------" << std::endl;
		std::cout << "��� : " << temp << std::endl;
		std::cout << "���� : " << humidity << std::endl;
		std::cout << "��� : " << pressure << std::endl;		
		std::cout << "----------------------------" << std::endl;
	}
};

