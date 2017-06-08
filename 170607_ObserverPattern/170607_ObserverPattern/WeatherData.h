#pragma once
#include <iostream>
#include <vector>

#include "Subject.h"
#include "Observer.h"

class WeatherData : public Subject
{
private:
	std::vector<Observer*> vecOb;
	std::vector<Observer*>::const_iterator vitOb;
	float temp, humidity, pressure;

public:
	WeatherData();
	~WeatherData();

	void registObserver(Observer* observer);		//������ ���
	void deleteObserver(Observer* observer);		//������ ����
	void notifyObservers();							//������ ����
	void measurementsChanged();						//������ ������Ʈ
	
	int foundVecIdx(Observer* observer);			//���� �����Ͱ��� �̿��� �ε����� ����

	float getTemperature() { return temp; }			//�µ� ��ȯ
	float getHumidity() { return humidity; }		//���� ��ȯ
	float getPressure() { return pressure; }		//��� ��ȯ

	void setMeasurements(float temp, float humidity, float pressure);	//������� �޾ƿ�
};

