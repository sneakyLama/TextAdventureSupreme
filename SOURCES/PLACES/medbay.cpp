#include <iostream>
#include "variablesGlobal.h"
#include "medbayHeader.h"
#include "goPlacesHeader.h"

void medbay(){

	system("cls");

	std::cout << "In medbay." << std::endl;

	inHangar = false;
	inBridge = false;
	inMedbay = true;
	inStore = false;
	inHelpConsole = false;

	system("pause");

	goPlaces();

}