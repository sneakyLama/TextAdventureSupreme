#include <iostream>
#include "variablesGlobal.h"
#include "medbayHeader.h"
#include "medbayTitleHeader.h"
#include "goPlacesHeader.h"
#include "timeGoneByHeader.h"
#include "randomBattleHeader.h"

void medbay(){

	system("cls");

	timeGoneBy();
	medbayTitle();

	std::cout << "In medbay." << std::endl;

	inHangar = false;
	inBridge = false;
	inMedbay = true;
	inStore = false;
	inHelpConsole = false;

	randomBattle();

	std::cout << "\n\n\n                            Press ENTER to CONTINUE";
	std::cin.ignore();
	std::cin.get();

	goPlaces();

}