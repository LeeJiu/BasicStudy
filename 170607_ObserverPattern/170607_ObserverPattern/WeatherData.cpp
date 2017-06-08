#include "WeatherData.h"



WeatherData::WeatherData()
{
}


WeatherData::~WeatherData()
{
	vecOb.clear();
}

void WeatherData::registObserver(Observer* observer)
{
	vecOb.push_back(observer);
}

void WeatherData::deleteObserver(Observer* observer)
{
	int idx = foundVecIdx(observer);
	if(idx >= 0) vecOb.erase(vecOb.begin() + idx);
} 

void WeatherData::notifyObservers()
{
	for (vitOb = vecOb.begin(); vitOb != vecOb.end(); vitOb++)
	{
		(*vitOb)->update(temp, humidity, pressure);
	}
}

void WeatherData::measurementsChanged()
{
	notifyObservers();
}

int WeatherData::foundVecIdx(Observer * observer)
{
	int size = vecOb.size();
	for (int i = 0; i < size; i++)
	{
		if (vecOb[i] == observer) return i;
		else continue;
	}

	std::cout << "없어 그런 구독자" << std::endl;
	return -1;
}

void WeatherData::setMeasurements(float temp, float humidity, float pressure)
{
	this->temp = temp;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
}
