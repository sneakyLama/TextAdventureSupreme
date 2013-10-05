#include <iostream>
#include "variablesGlobal.h"
#include "goPlacesHeader.h"
#include "hangarHeader.h"
#include "medbayHeader.h"
#include "storeHeader.h"
#include "helpConsoleHeader.h"
#include "bridgeHeader.h"
#include "doNothingHeader.h"
#include "quitGameHeader.h"
#include "kitchenHeader.h"
#include <Windows.h>

void goPlaces(){

	system("cls");
	
	if(inBridge == false){
		std::cout << "Where would you like to go?\n" << std::endl;
		std::cout << "1: Bridge" << std::endl << "2: Hangar" << std::endl << "3: Medbay" << std::endl << "4: Kitchen" << std::endl << "5: Store" << std::endl << "6: Do Nothing" << std::endl << std::endl;

		std::cout << "Room number: ";
		std::cin >> goToRoom;
		
		if(goToRoom == 1){
			bridge();
		}
		else if(goToRoom == 2){
			hangar();
		}
		else if(goToRoom == 3){
			medbay();
		}
		else if(goToRoom == 4){
			kitchen();
		}
		else if(goToRoom == 5){
			store();
		}
		else if(goToRoom == 6){
			doNothing();
		}
		else{
			system("cls");
			std::cout << "You might want to use one of your options...";
			Sleep(2500);
			goPlaces();
		}
	}
	else{
		std::cout << "Where would you like to go?" << std::endl;
		std::cout << "\n1: Hangar" << std::endl << "2: Medbay" << std::endl << "3: Store" << std::endl << "4: Kitchen" << std::endl << "5: Help Console" << std::endl << "6: Do Nothing" << std::endl << "7: Quit Game" << std::endl;
		
		std::cout << "\nRoom number: ";
		std::cin >> goToRoom;

		if(goToRoom == 1){
			hangar();
		}
		else if(goToRoom == 2){
			medbay();
		}
		else if(goToRoom == 3){
			store();
		}
		else if(goToRoom == 4){
			kitchen();
		}
		else if(goToRoom == 5){
			helpConsole();
		}
		else if(goToRoom == 6){
			doNothing();
		}
		else if(goToRoom == 7){
			quitGame();
		}
		else{
			system("cls");
			std::cout << "You might want to use one of your options...";
			Sleep(2500);
			goPlaces();
		}
	}
}