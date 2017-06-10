#pragma once
#include "Pizza.h"

class NYStyleHawaianPizza : public Pizza
{
	std::string kind;			//종류
	std::string foodStuffs;		//재료
	double temperature;			//굽는온도

public:
	NYStyleHawaianPizza()
	{
		kind = "뉴욕 풍 하와이안 피자";
		foodStuffs = "밀가루, 뉴욕 스타일 소스, 파인애플, 모짜렐라 치즈";
		temperature = 300;
	}
	~NYStyleHawaianPizza() {};

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
		std::cout << temperature << "'C에서 얇게 굽는다." << std::endl;
	}

	void cut()
	{
		std::cout << "자른다." << std::endl;
	}

	void box()
	{
		std::cout << "뉴욕 스타일 피자 포장박스로 포장한다." << std::endl;
	}
};