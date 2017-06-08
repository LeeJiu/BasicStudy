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
		//등록은 생성자에서
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
		std::cout << "---" << name << "님의 구독정보---" << std::endl;
		std::cout << "----------------------------" << std::endl;
		std::cout << "기온 : " << temp << std::endl;
		std::cout << "습도 : " << humidity << std::endl;
		std::cout << "기압 : " << pressure << std::endl;
		std::cout << "----------------------------" << std::endl;
	}
};

