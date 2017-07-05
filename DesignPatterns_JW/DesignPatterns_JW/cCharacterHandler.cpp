#include "cCharacterHandler.h"



cCharacterHandler::cCharacterHandler()
{
}


cCharacterHandler::~cCharacterHandler()
{
	delete m_pCharacter;
}

void cCharacterHandler::SelectCharacter()
{
	std::cout << "[ Select Character ]" << std::endl;
	std::cout << "1. Prinny" << std::endl;
	std::cout << "2. Flonne" << std::endl;

	int input = 0;

	while (input > -1)
	{
		std::cin >> input;

		switch (input)
		{
		case 1:
			m_pCharacter = new cPrinny();
			std::cout << "Selected Prinny!" << std::endl << std::endl;
			input = -1;
			break;
		case 2:
			m_pCharacter = new cFlonne();
			std::cout << "Selected Flonne!" << std::endl << std::endl;
			input = -1;
			break;
		default:
			std::cout << "Error! Input Again!" << std::endl << std::endl;
			break;
		}
	}
}

void cCharacterHandler::SelectOrder()
{
	int input = 0;

	while (input > -1)
	{
		std::cout << "[ Select Order ]" << std::endl;
		std::cout << "1. Attack" << std::endl;
		std::cout << "2. Change Attack" << std::endl;
		std::cout << "Press Other Number Key To Exit." << std::endl;

		std::cin >> input;

		switch (input)
		{
		case 1:
			m_pCharacter->Attack();
			std::cout << std::endl;
			break;
		case 2:
			std::cout << std::endl;
			ChangeWeapon();
			break;
		default:
			std::cout << "Exit." << std::endl << std::endl;
			input = -1;
			break;
		}
	}
}

void cCharacterHandler::ChangeWeapon()
{
	std::cout << "[ Change Weapon ]" << std::endl;
	std::cout << "1. Spear" << std::endl;
	std::cout << "2. Sword" << std::endl;
	std::cout << "3. Staff" << std::endl;
	
	int input = 0;

	while (input > -1)
	{
		std::cin >> input;

		switch (input)
		{
		case 1:
			m_pCharacter->SetBehaviorAttack(new cSpearAttack());
			std::cout << "Changed Spear!" << std::endl << std::endl;
			input = -1;
			break;
		case 2:
			m_pCharacter->SetBehaviorAttack(new cSwordAttack());
			std::cout << "Changed Sword!" << std::endl << std::endl;
			input = -1;
			break;
		case 3:
			m_pCharacter->SetBehaviorAttack(new cStaffAttack());
			std::cout << "Changed Staff!" << std::endl << std::endl;
			input = -1;
			break;
		default:
			std::cout << "Error! Input Again!" << std::endl << std::endl;
			break;
		}
	}

	
}
