#include <iostream>

#include "kitchenHeader.h"
#include "kitchenTitleHeader.h"
#include "goPlacesHeader.h"
#include "variablesGlobal.h"
#include "timeGoneByHeader.h"
#include "randomBattleHeader.h"

void kitchen(){

	system("cls");

	timeGoneBy();

	kitchenTitle();

	inBridge = false;
	inHangar = false;
	inStore = false;
	inMedbay = false;
	inHelpConsole = false;
	inKitchen = true;

	randomBattle();

	foodConsumption = army + (fighters * 2) + crewSize;

	std::cout << "This Kitchen shows how much food you have, how much food your personnel\n    is eating, and how long you have left until you run out of food." << std::endl << std::endl;

	std::cout << "\n\t\tFood: " << food << "\n\n\t\tFood Consumption per Day: " << foodConsumption << "\n\n\t\tFood for: " << food / foodConsumption << " more days." << std::endl;

	std::cout << "\n\n\n\n                            Press ENTER to CONTINUE";
	std::cin.ignore();
	std::cin.get();

	goPlaces();

}