#include <iostream>
#include <Windows.h>
#include "variablesGlobal.h"
#include "helpConsoleHeader.h"
#include "bridgeHeader.h"

void helpConsole(){

	system("cls");

	std::cout << "In help console." << std::endl;

	std::cout << "1: Set how tall (up down) your console window is.\n\nAction: ";

	std::cin >> smallChoice;

	if(smallChoice == 1){

		std::cout << "How tall (in INCHES), do you want your window?\n\nInches: ";
		std::cin >> windowConversion;

		windowTall = windowConversion * 105;

		HWND console = GetConsoleWindow();
		RECT ConsoleRect;
		GetWindowRect(console, &ConsoleRect);
		MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 800, windowTall, TRUE);

	}

	inHangar = false;
	inBridge = false;
	inMedbay = false;
	inStore = false;
	inHelpConsole = true;

	system("pause");

	bridge();

}