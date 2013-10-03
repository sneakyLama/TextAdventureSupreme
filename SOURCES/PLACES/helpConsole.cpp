#include <iostream>
#include <Windows.h>
#include "variablesGlobal.h"
#include "helpConsoleHeader.h"
#include "bridgeHeader.h"
#include "helpConsoleTitleHeader.h"

void helpConsole(){

	system("cls");

	helpConsoleTitle();

	std::cout << "1: Set how tall (up down) your console window is.\n\nAction: ";

	std::cin >> smallChoice;

	if(smallChoice == 1){

		std::cout << "How tall (in INCHES), do you want your window?\n\nInches: ";
		std::cin >> windowConversion;

		if(windowConversion < 11){

			windowTall = windowConversion * 102;

			HWND console = GetConsoleWindow();
			RECT ConsoleRect;
			GetWindowRect(console, &ConsoleRect);
			MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 800, windowTall, TRUE);

		}

		else{

			system("cls");

			std::cout << "That is too big! Try something that will actually fit on your screen!";

			Sleep(3000);

			helpConsole();

		}
	}

	inHangar = false;
	inBridge = false;
	inMedbay = false;
	inStore = false;
	inHelpConsole = true;

	system("pause");

	bridge();

}