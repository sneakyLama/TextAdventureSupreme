#include "quitGameHeader.h"
#include "variablesGlobal.h"
#include "goPlacesHeader.h"

#include <iostream>
#include <Windows.h>

void quitGame(){
	system("cls");

	std::cout << "Exiting the game will cause you to black out." << std::endl;
	Sleep(2500);
	std::cout << "Forgetting everything that has happened..." << std::endl;
	Sleep(2500);
	std::cout << "\nIt will also cause a rip in the time space continuum." << std::endl;
	Sleep(2750);
	std::cout << "Sending you back in time before your mission started..." << std::endl;
	//std::cout << "Sending you back in time " << diff << " seconds..." << std::endl << std::endl;
	Sleep(3750);

	std::cout << "\nAre you sure you want to quit?\n\n1: Yes\n2: No\n\nAnswer: ";
	std::cin >> quit;

	system("cls");

	if(quit == 1){
		std::cout << "You black out";
		Sleep(750);
		std::cout << " .";
		Sleep(750);
		std::cout << " .";
		Sleep(750);
		std::cout << " .\n";
		Sleep(750);

		system("cls");
		
		Sleep(1000);

		std::cout << "\n\n\n\n\n\n\n\n\n\n\n                                 Press ENTER";
		std::cin.ignore();
		std::cin.get();

	}
	else{
		system("cls");
		std::cout << "You chose not to quit...";
		Sleep(2500);
		goPlaces();
	}
}