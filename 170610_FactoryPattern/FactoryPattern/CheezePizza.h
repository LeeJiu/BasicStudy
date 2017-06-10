#pragma once
#include "Pizza.h"

class CheezePizza : public Pizza
{
	std::string kind;			//종류
	std::string foodStuffs;		//재료
	double temperature;			//굽는온도

public:
	CheezePizza() 
	{ 
		kind = "치즈 피자";
		foodStuffs = "밀가루, 토마토 소스, 체다 치즈, 모짜렐라 치즈, 옥수수";
		temperature = 300;
	}
	~CheezePizza() {};

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
		std::cout << temperature << "'C에서 굽는다." << std::endl;
	}

	void cut()
	{
		std::cout << "자른다." << std::endl;
	}

	void box()
	{
		std::cout << "포장한다." << std::endl;
	}
};