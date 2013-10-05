#include "hangarHeader.h"
#include "hangarTitleHeader.h"
#include "variablesGlobal.h"
#include "goPlacesHeader.h"
#include "timeGoneByHeader.h"
#include "randomBattleHeader.h"

#include <Windows.h>
#include <cmath>
#include <iostream>

using namespace std;

int armyCost = (int).25 * sqrt(totalArmy * 1.0) + 6, fightersCost = (int)(.25 * sqrt(totalArmy * 1.0) + 6) * 1.8;
int armySell = (int).4 * armyCost, fighterSell = (int).4 * fightersCost;

void hangar(){

	totalArmy = army + (2 * fighters);
	armyCost = (int)(.12 * sqrt(totalArmy * 1.0));
	fightersCost = (int)(.12 * sqrt(totalArmy * 1.0)) * 1.8;


	// chance for a random space battle to happen based on how many fighters you have
	if(fighters < 36200){
		battleChance = (int)((.156 * (std::sqrt((-fighters) + 36200.0))) + 10);
	}
	else{
		battleChance = 10;
	}

	system("cls");

	hangarTitle();
	randomBattle();
	timeGoneBy();

	inHangar = true;
	inBridge = false;
	inMedbay = false;
	inStore = false;
	inHelpConsole = false;

	cout << "battlechance: " << battleChance << std::endl; // for debug and testing purposes

	cout << "You are in the hangar now. What do you want to do?\n\n\t Army Size: " << army << " troops.\n\tFleet Size: " << fighters << " fighters.\n" << endl; 

	cout << "1: Train Troops (" << armyCost << " credits per troop)" << endl;
	cout << "2: Train Space Fighters (" << fightersCost << " credits per fighter)" << endl;
	cout << "3: Hangar Help" << endl;
	cout << "4: Leave Hangar" << endl << endl;
	cout << "Credits: " << credits << endl << endl;

	cout << "Action: ";
	cin >> smallChoice;
	cout << "\n\n";

	if (smallChoice == 4){
		goPlaces();
	}
	else if(smallChoice > 4){
		cout << "You might want to use one of your options...";
		Sleep(1250);
		hangar();
	}
	else if(smallChoice < 4){
		switch(smallChoice){
////////////////////////////// Army Training ///////////////////////////////////////////////
		case 1:
			system("cls");

			if (credits < armyCost){
				cout << "You do not have enough credits to train any troops." << endl;
			}
			else{
				cout << "How many troops would you like to train?\nNumber: ";
				cin >> trainNumber;
				if(trainNumber * armyCost > credits){
					cout << "You do not have enough credits for this transaction.\nYou need " << (trainNumber * armyCost) - credits << " more credits to pay for " << trainNumber << " troops.";
				}
				else{
					cout << endl << "Are you sure you want to train " << trainNumber << " troops for " << armyCost * trainNumber << " credits?";
					cout << endl << "\n1: Yes\n2: No\n\nAnswer: ";
					cin >> yesTrain;
					if(yesTrain == 1){
						army = army + trainNumber;
						credits = credits - (trainNumber * armyCost);
						cout << "\nYou now have " << army << " troops.";
						cout << "\nYou have " << credits << " credits left.";
					}
					else{
						cout << "You chose not to train any troops...";
					}
				}
			}
		
			cout << "\n\n";

			break;
///////////////////////////// Fighter Building /////////////////////////////////////////////////////////////
			
		case 2:
			system("cls");

			if (credits < fightersCost){
				cout << "You do not have enough credits to build any fighters." << endl;
			}
			else{
				cout << "How many fighters would you like to build?\nNumber: ";
				cin >> trainNumber;
				if(trainNumber * fightersCost > credits){
					cout << "You do not have enough credits for this transaction.\nYou need " << (trainNumber * fightersCost) - credits << " more credits to pay for " << trainNumber << " fighters.";
				}
				else{
					cout << endl << "Are you sure you want to build " << trainNumber << " fighters for " << fightersCost * trainNumber << " credits?";
					cout << endl << "\n1: Yes\n2: No\n\nAnswer: ";
					cin >> yesTrain;
					if(yesTrain == 1){
						fighters = fighters + trainNumber;
						credits = credits - (trainNumber * fightersCost);
						cout << "\nYou now have " << fighters << " fighters.";
						cout << "\nYou have " << credits << " credits left.";
					}
					else{
						cout << "You chose not to build any fighters...";
					}
				}
			}

			cout << "\n\n";

			break;

////////////////////////////// HANGAR HELP ////////////////////////////////////////////

		case 3:

			system("cls");

			cout << "Troops are used to invade planets, and fighters are used for space battles!\n" << endl;
			cout << "Spend credits wisely, although rather\n    easy to come by, you never want to spend all of your money in one place.\n" << endl;
			cout << "When prompted to choose how many to train, pick a number \n    (EX: 100, 1000, 452 etc) to train\n    make sure you have money to pay for all of it!" << endl;

		}
	}
	else{

		cout << "You might want to use one of your options...";
		Sleep(1250);
		hangar();

	}

	cout << "\n\n\n                            Press ENTER to CONTINUE";
	cin.ignore();
	cin.get();

	hangar();

}