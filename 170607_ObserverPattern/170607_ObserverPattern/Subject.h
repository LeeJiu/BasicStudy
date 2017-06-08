#pragma once
#include "Observer.h"

//주체 인터페이스
class Subject
{
public:
	Subject() {};
	~Subject() {};

	virtual void registObserver(Observer* observer) = 0;	//구독자 추가
	virtual void deleteObserver(Observer* observer) = 0;		//구독자 제거
	virtual void notifyObservers() = 0;						//정보제공
};

