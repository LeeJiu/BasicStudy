#pragma once
#include "Pizza.h"

class ChicagoStylePotatoPizza : public Pizza
{
	std::string kind;			//종류
	std::string foodStuffs;		//재료
	double temperature;			//굽는온도

public:
	ChicagoStylePotatoPizza()
	{
		kind = "시카고 풍 포테이토 피자";
		foodStuffs = "밀가루, 토마토 소스, 웨지감자, 베이컨, 양파, 모짜렐라 치즈, 더블 치즈, 옥수수";
		temperature = 270;
	}
	~ChicagoStylePotatoPizza() {};

	void pizzaKind()
	{
		std::cout << "피자 종류 : " << this->kind << "." << std::endl;
	}

	void prepare()
	{
		std::cout << "재료 : " << foodStuffs << "." << std::endl;
	}

	void bake()
	{
		std::cout << temperature << "'C로 오븐에 두껍게 굽는다." << std::endl;
	}

	void cut()
	{
		std::cout << "자른다." << std::endl;
	}

	void box()
	{
		std::cout << "시카고 스타일 피자 포장박스로 포장한다." << std::endl;
	}
};