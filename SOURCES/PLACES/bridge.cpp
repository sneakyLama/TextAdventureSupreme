#include "variablesGlobal.h"
#include <iostream>
#include "bridgeHeader.h"
#include "bridgeTitleHeader.h"
#include "goPlacesHeader.h"
#include "timeGoneByHeader.h"
#include "randomBattleHeader.h"
#include "randomFindHeader.h"
#include <random>
#include <Windows.h>

void bridge(){
	
	int asterScrapEncounter, asterOrScrap;

	system("cls");

	timeGoneBy();

	bridgeTitle();

	inHangar = false;
	inBridge = true;
	inMedbay = false;
	inStore = false;
	inHelpConsole = false;

	randomBattle();

	// Random find function stuff!
	rand() % 20 + 1 >> asterScrapEncounter;

	if(asterScrapEncounter == 10){

		rand() % 2 + 1 >> asterOrScrap;

		if(asterOrScrap == 1){

			std::cout << "You enter an asteroid field.";
			Sleep(1000);
			asteroidField = true;
			scrapField = false;
			randomFind();

		}
		else{

			std::cout << "You enter a scrap field.";
			Sleep(1000);
			scrapField = true;
			asteroidField = false;
			randomFind();
		}
	}

	// code

	std::cout << "\n\n\n                            Press ENTER to CONTINUE";
	std::cin.ignore();
	std::cin.get();

	goPlaces();

}