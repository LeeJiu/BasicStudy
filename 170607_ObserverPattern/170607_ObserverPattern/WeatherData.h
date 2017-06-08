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

	void registObserver(Observer* observer);		//구독자 등록
	void deleteObserver(Observer* observer);		//구독자 삭제
	void notifyObservers();							//데이터 전달
	void measurementsChanged();						//데이터 업데이트
	
	int foundVecIdx(Observer* observer);			//벡터 데이터값을 이용한 인덱스값 산출

	float getTemperature() { return temp; }			//온도 반환
	float getHumidity() { return humidity; }		//습도 반환
	float getPressure() { return pressure; }		//기압 반환

	void setMeasurements(float temp, float humidity, float pressure);	//기상정보 받아옴
};

