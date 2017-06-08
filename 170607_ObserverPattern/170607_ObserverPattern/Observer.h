#pragma once
#include <iostream>
#include <string>

//구독자(관찰자) 인터페이스
class Observer
{
public:
	Observer() {};
	~Observer() {};
	
	virtual void update(float temp, float humidity, float pressure) = 0;	//온도, 습도, 기압정보
	virtual void unFollow() = 0;
};

