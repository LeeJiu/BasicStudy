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
		std::cout << "--------현재 기상정보--------" << std::endl;
		std::cout << "----------------------------" << std::endl;
		std::cout << "기온 : " << temp << std::endl;
		std::cout << "습도 : " << humidity << std::endl;
		std::cout << "기압 : " << pressure << std::endl;		
		std::cout << "----------------------------" << std::endl;
	}
};

