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
string enemyFighterSize;
int goToRoom = 0;
int smallChoice = 0;

int trainNumber = -1;
int crewSize = 100, army = 1000, fighters = 100;
int totalArmy = army + (2 * fighters);

int casualtiesWinLoss = (int)((((rand() % 33) + 1) / 100) * fighters), casualtiesLoseLoss = (int)((((rand() % 45) + 33) / 100) * fighters), casualtiesHugeWin;
int payout, losingPayout;
int difference;
int enemyAdvantage, advantage;

int winChance;
int result;

int enemyArmy, enemyFighters;

int wounded = 0, healed = 0;
int medbayUsage = 0, medbaySize = 125;
int credits = 1000000;
int hullHealth = 100;

int casualties;

int days = 0;

//             v NEEDS BALANCING & LOGIC v (inverse function?) 
int battleGo, battleChance = 75 - (days * 3);

int food = 25000, foodConsumption;
int foodCost = (int)(.01 * sqrt(food * 1.0)) + 1;
int purchaseAmount;
int yesPurchase;

int upgradeNum;
int upgradeCost = 10000;
int upgradeTroopLvl = 1, upgradeFighterLvl = 1, upgradeHullLvl = 1;

int shipStrength = 100, troopStrength = 1, fighterStrength = 3;
int totalTroopStrength = army * troopStrength, totalFighterStrength = fighters * fighterStrength;

int enemyTroopStrength = 1, enemyFighterStrength = 3;
int enemyTotalTroopStrength = enemyArmy * enemyTroopStrength, enemyTotalFighterStrength = enemyFighters * enemyFighterStrength;

int yesTrain;

bool inBridge = false;
bool inHangar = false;
bool inStore = false;
bool inMedbay = false;
bool inHelpConsole = false;
bool inKitchen = false;

bool asteroidField = false, scrapField = false;

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