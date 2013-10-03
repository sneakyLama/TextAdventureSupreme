#include "variablesGlobal.h"
#include <iostream>
#include "bridgeHeader.h"
#include "bridgeTitleHeader.h"
#include "goPlacesHeader.h"

void bridge(){

	system("cls");

	bridgeTitle();

	inHangar = false;
	inBridge = true;
	inMedbay = false;
	inStore = false;
	inHelpConsole = false;

	system("pause");

	goPlaces();

}