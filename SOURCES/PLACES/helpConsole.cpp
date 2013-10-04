#include <iostream>
#include <Windows.h>
#include "variablesGlobal.h"
#include "helpConsoleHeader.h"
#include "bridgeHeader.h"
#include "helpConsoleTitleHeader.h"

int smallW = 250, mediumW = 400, largeW = 600;

void helpConsole(){

	system("cls");

	helpConsoleTitle();

	std::cout << "1: Set how tall (up down) your console window is.\n2: Gameplay explanation\n\nAction: ";

	std::cin >> smallChoice;

	if(smallChoice == 1){

		std::cout << "How tall do you want your window?\n\n1: Small\n2: Medium\n3: Large\n\nSize: ";

		std::cin >> windowChoice;

		if(windowChoice == 1){

			windowTall = smallW;

		}
		else if(windowChoice == 2){

			windowTall = mediumW;

		}
		else if(windowChoice == 3){

			windowTall = largeW;

		}
		else{

			system("cls");

			std::cout << "You might want to use one of your options...";

			Sleep(3000);

			helpConsole();

		}

		HWND console = GetConsoleWindow();
		RECT ConsoleRect;
		GetWindowRect(console, &ConsoleRect);
		MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 800, windowTall, TRUE);

	}

	else if(smallChoice == 2){

		std::cout << "Text Adventure Supreme: Space Commander is a text based adventure written in C++." << std::endl << std::endl;

		std::cout << "You make choices and do actions all with the number keys, and the Enter key." << std::endl << std::endl;

		std::cout << "The object of the game is to essentially take part of the ongoing struggle" << std::endl;
		std::cout << "	  of protecting this outlying, colonial sector of your race." << std::endl << std::endl;

		std::cout << "Basically, you want to train troops in the Hangar to use to fight battles." << std::endl << std::endl;

		std::cout << "Make sure you don't run out of food for your troops!\n	They will starve! Buy in the Store!" << std::endl << std::endl;

		std::cout << "You can buy upgrades, food, and other things in the Store with credits.\n    You earn credits through winning battles, and incremental payments from conquered planets!" << std::endl << std::endl;
	}

	inHangar = false;
	inBridge = false;
	inMedbay = false;
	inStore = false;
	inHelpConsole = true;

	std::cout << "Press ENTER to return to the BRIDGE";
	std::cin.ignore();
	std::cin.get();

	bridge();

}