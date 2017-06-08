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
	/* �ð� */
	clock_t before;
	before = clock();

	WeatherData* weatherCast = new WeatherData;
	Observer* user1 = new ClientDisplay("C��", weatherCast);				//������ �����ڵ��� �ڽ��� �����ڿ���
	Observer* displayer = new CurrentConditionsDisplay(weatherCast);	//������ ��ü�� ����Ѵ�.

	weatherCast->setMeasurements(26.f, 10.f, 35.f);						//���� ����� ����� �ڵ����� �Ǿ������� 
																		//����Ʈ�� ������Ʈ �� ������ �ڵ����� �˷���
	weatherCast->setMeasurements(15.f, 40.f, 15.f);

	user1->unFollow();													//���Ƿ� ���� ������� �Լ�
	weatherCast->setMeasurements(20.f, 15.f, 10.f);

	delete weatherCast;
	delete user1;
	delete displayer;
	
	/* �ð� */
	pcTime(before);		
}

void pcTime(clock_t before)
{
	double result;
	result = (double)(clock() - before) / CLOCKS_PER_SEC;
	cout << "�ɸ��ð��� " << result << "�Դϴ�" << endl;
}