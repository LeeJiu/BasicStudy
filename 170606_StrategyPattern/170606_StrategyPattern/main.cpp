#pragma once
#include <iostream>

#include "Tiger.h"
#include "Sparrow.h"

enum aniKind {
	TIGER = 1,
	SPARROW,
	EXIT
};

void main()
{
	int ani;
	
	while (1)
	{
		std::cout << "생성할 동물을 선택하세요" << std::endl;
		std::cout << "1.호랑이 2.참새 3.종료" << std::endl;
		std::cin >> ani;

		if (ani == 3)
			break;

		switch (ani)
		{
		case TIGER:
		{
			Animal* tiger = new Tiger;
			tiger->Display();
			tiger->PerformFly();
			tiger->PerformSound();

			std::cout << std::endl;

			delete tiger;
			break;
		}
		case SPARROW:
		{

			Animal* sparrow = new Sparrow;

			sparrow->Display();
			sparrow->PerformFly();
			sparrow->PerformSound();

			std::cout << std::endl;

			delete sparrow;
			break;
		}
		}
	}
	

}