#include <iostream>
#include "storeHeader.h"
#include "variablesGlobal.h"
#include "goPlacesHeader.h"

void store(){

	system("cls");

	std::cout << "In Store." << std::endl;

	inHangar = false;
	inBridge = false;
	inMedbay = false;
	inStore = true;
	inHelpConsole = false;

	system("pause");

	goPlaces();

}