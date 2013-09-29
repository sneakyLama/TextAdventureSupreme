#include "variablesGlobal.h"
#include <iostream>
#include "bridgeHeader.h"
#include "goPlacesHeader.h"

void bridge(){

	system("cls");

	std::cout << "In Bridge." << std::endl;

	inHangar = false;
	inBridge = true;
	inMedbay = false;
	inStore = false;
	inHelpConsole = false;

	system("pause");

	goPlaces();

}