#include <iostream>
#include "variablesGlobal.h"
#include "helpConsoleHeader.h"
#include "bridgeHeader.h"

void helpConsole(){

	system("cls");

	std::cout << "In help console." << std::endl;

	inHangar = false;
	inBridge = false;
	inMedbay = false;
	inStore = false;
	inHelpConsole = true;

	system("pause");

	bridge();

}