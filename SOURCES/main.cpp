#include "goPlacesHeader.h"
#include <string>
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <time.h>

using namespace std;

// Main class

string name, shipName;
int goToRoom = 0;
int smallChoice = 0;

int trainNumber = -1;
int crewSize = 100, army = 1000, fighters = 100, totalArmy = army + (2 * fighters);
int armyCost = (50 + (totalArmy * .01)) / 10, fightersCost = armyCost + (armyCost * .8);
int wounded = 0, healed = 0;
int medbayUsage = 0, medbaySize = 125;
int credits = 10000;
int hullHealth = 100;
int food = 25000;

int shipStrength = 10, troopStrength = 1, fighterStrength = 3;
int totalTroopStrength = army * troopStrength, totalFighterStrength = fighters * fighterStrength;

int yesTrain;

bool inBridge = false;
bool inHangar = false;
bool inStore = false;
bool inMedbay = false;
bool inHelpConsole = false;

int quit = 2;

int shipNameLength;

int main(){

	/*
	clock_t t1,t2;
	t1=clock();
	//code goes here
	t2=clock();
	float diff ((float)t2-(float)t1);

	float timePlayed = diff / CLOCKS_PER_SEC;
	*/
	
	cout << "An INSC space cruiser travels through space.\n"; // INSC = Interstellar Nation's Space Command
	//Sleep(3000);
	system("cls"); // Clear console window for immersion...
	cout << "What is the cruiser's name?\nShip Name: ";
	cin >> shipName;

	// Convert shipName to all caps, for immersion.
	shipNameLength = shipName.size();
	for (int upperDo = 0; upperDo < shipNameLength; ++upperDo)
	{
		shipName[upperDo] = toupper(shipName[upperDo]);
	}

	system("cls");
	cout << "Aboard the " << shipName << ", there commands a famous Admiral.\nAdmiral's Name: ";
	cin >> name;
	system("cls");

	// Setting, tutorial (REMINDER: Text file for different stories?)
	// Carefully (sort of) formatted... try not to modify... if you do, re-format please!
	cout << "|-------------------------------------------------------------------------------|";
	cout << "\n|Admiral " << name << ", you are in command of this cruiser.\n|Your mission is to defend one of our outlying colonies in sector X1NO5.\n|" << endl;
	cout << "|Just go around fending off random encounters with pirates and enemies.\n|You can also land on hostile planets with a ground troop invasion.\n|" << endl;
	cout << "|Capturing planets can lead to higher troop morale bonuses, and increased income|" << endl;
	cout << "|There is a store you can go to to buy food and upgrades.\n|The hangar of your ship is used to train troops and build more fighters.\n|" << endl;
	cout << "|Fighters are used in space battles if you encounter an enemy space force.\n|" << endl;
	cout << "|Need help? Just go to the 'Help Console', which is accessed from the bridge.\n|" << endl;
	cout << "|The Interstellar Nation's Space Command is counting on you, good luck.\n|" << endl;
	cout << "|-------------------------------------------------------------------------------\n" << endl;
	
	system("pause"); // Press any key to continue . . .

	cout << "\n\n";

	goPlaces(); // Getting around the ship function.

	return 0; 

}