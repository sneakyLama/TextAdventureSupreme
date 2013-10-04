#include "titleScreenHeader.h"
#include "completeStartHeader.h"
#include "goPlacesHeader.h"
#include <string>
#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

// Main class

string name, shipName;
int goToRoom = 0;
int smallChoice = 0;

int trainNumber = -1;
int crewSize = 100, army = 1000, fighters = 100, totalArmy = army + (2 * fighters);
int wounded = 0, healed = 0;
int medbayUsage = 0, medbaySize = 125;
int credits = 10000;
int hullHealth = 100;

int food = 25000, foodConsumption;

int shipStrength = 10, troopStrength = 1, fighterStrength = 3;
int totalTroopStrength = army * troopStrength, totalFighterStrength = fighters * fighterStrength;

int yesTrain;

bool inBridge = false;
bool inHangar = false;
bool inStore = false;
bool inMedbay = false;
bool inHelpConsole = false;
bool inKitchen = false;

int quit = 2;

int shipNameLength;

int windowTall = 500;
int windowChoice = 0;

int main(){	

	// Resizing console window size to fit Title Screen comfortably, can change windowTall in the Help Console.
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);
	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 800, windowTall, TRUE);
	
	titleScreen();

	// BEGINNING //

	completeStart();
	goPlaces(); // Getting around the ship function.

	return 0; 

}