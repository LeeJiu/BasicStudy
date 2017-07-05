#include "cCharacterHandler.h"

int main(void)
{
	cCharacterHandler* pHandler = new cCharacterHandler();
	pHandler->SelectCharacter();
	pHandler->SelectOrder();
	delete pHandler;

	return 0;
}