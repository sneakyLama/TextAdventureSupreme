#include "doNothingHeader.h"
#include "goPlacesHeader.h"

#include <iostream>
#include <cmath>
#include <random>
#include <Windows.h>

int number;

void doNothing(){

	system("cls");

	number = (rand() % 5) + 1;

	switch(number){

		case 1:
			std::cout << "You look around the room.\nYou notice the gray pain is chipping in some places...";
			break;

		case 2:
			std::cout << "You stretch your arms a little.\nYou think about all the things you have to do....";
			break;

		case 3:
			std::cout << "You yawn boredly.\nIf only there is something that you could do...";
			break;

		case 4:
			std::cout << "You just feel like doing nothing for a few seconds...";
			break;

		case 5:
			std::cout << "You zone out looking at an INSC recruitment poster.\nIf only your were back on Earth right now...";
			break;
	}
	Sleep(3000);

	system("cls");

	Sleep(1000);
	goPlaces();
}