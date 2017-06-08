#pragma once
#include <iostream>
#include <vector>

#include "time.h"
#include "WeatherData.h"
#include "ClientDisplay.h"
#include "CurrentConditionsDisplay.h"

using namespace std;

void pcTime(clock_t before);

void main()
{
	/* 시간 */
	clock_t before;
	before = clock();

	WeatherData* weatherCast = new WeatherData;
	Observer* user1 = new ClientDisplay("C님", weatherCast);				//각각의 구독자들은 자신의 생성자에서
	Observer* displayer = new CurrentConditionsDisplay(weatherCast);	//구독할 주체를 등록한다.

	weatherCast->setMeasurements(26.f, 10.f, 35.f);						//위에 선언시 등록은 자동으로 되어있으니 
																		//데이트가 업데이트 될 때마다 자동으로 알려줌
	weatherCast->setMeasurements(15.f, 40.f, 15.f);

	user1->unFollow();													//임의로 만든 구독취소 함수
	weatherCast->setMeasurements(20.f, 15.f, 10.f);

	delete weatherCast;
	delete user1;
	delete displayer;
	
	/* 시간 */
	pcTime(before);		
}

void pcTime(clock_t before)
{
	double result;
	result = (double)(clock() - before) / CLOCKS_PER_SEC;
	cout << "걸린시간은 " << result << "입니다" << endl;
}