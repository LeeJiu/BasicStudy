#pragma once
#include <iostream>
#include <string>

//추상클래스(인터페이스) - 순수 가상함수를 선언한 클래스는 인스턴스화 할 수 없다
//따라서 타 클래스에서 해당 형식을사용할 땐 포인터로 선언해서 사용해야 한다
class Beverage
{
public:
	std::string description = "제목 없음";

	Beverage() {};
	~Beverage() {};

	//음료 설명
	virtual std::string getDescription()	{ return description; }
	//가격
	virtual double getCost() = 0;
};

