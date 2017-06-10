#pragma once
#include "PizzaStore.h"
#include "SimplePizzaFactory.h"
#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"

void main()
{
	///*심플 팩토리 예제*/
	////new로 동적할당하지 않으면 인스턴스화가 되지 않기 때문에 생성자가 호출되지 않아 생성x?
	////new는 동적할당인것이지 인스턴스화가 아니지않는가 ? 찾아보쟝
	//SimplePizzaFactory* factory = new SimplePizzaFactory;
	//PizzaStore* store = new PizzaStore(factory);
	//
	//std::cout << std::endl;
	//
	////동적할당을 이미해주고잇다.
	//Pizza* pizza = store->orderPizza("Potato");
	//std::cout << std::endl;
	//
	//Pizza* pizza2 = store->orderPizza("Hawaian");
	//std::cout << std::endl;
	//
	//Pizza* pizza3 = store->orderPizza("Cheeze");
	//std::cout << std::endl;
	//
	//delete factory;
	//delete store;

	/*팩토리 메소드 예제*/
	//제발 클래스 접근 지정자 public에 생성자를 선언하자****(자꾸까먹음)
	PizzaStore* nyPizzaStore = new NYPizzaStore;
	PizzaStore* chPizzaStore = new ChicagoPizzaStore;

	std::cout << std::endl;

	//뉴욕.
	std::cout << "뉴욕 피자 전문점" << std::endl;
	Pizza* pizza = nyPizzaStore->orderPizza("Potato");
	std::cout << std::endl;

	Pizza* pizza2 = nyPizzaStore->orderPizza("Hawaian");
	std::cout << std::endl;

	Pizza* pizza3 = nyPizzaStore->orderPizza("Cheeze");
	std::cout << std::endl;

	//시카고
	std::cout << "시카고 피자 전문점" << std::endl;
	Pizza* pizza4 = chPizzaStore->orderPizza("Potato");
	std::cout << std::endl;

	Pizza* pizza5 = chPizzaStore->orderPizza("Hawaian");
	std::cout << std::endl;

	Pizza* pizza6 = chPizzaStore->orderPizza("Cheeze");
	std::cout << std::endl;

	delete nyPizzaStore;
	delete chPizzaStore;

	//생산자 클래스인 store(creator)과 
	//제품 클래스인 pizza(product)로 구분된당
	//이 두 종류의 클래스는 서로 병렬클래스 계층구조를 갖는다.
	//일부 추상클래스로 피자가게를 구성함으로서 팩토리 메소드는 캡슐화에 있어 핵심적이다
}