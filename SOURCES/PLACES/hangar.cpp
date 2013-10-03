#include "hangarHeader.h"
#include "hangarTitleHeader.h"
#include "variablesGlobal.h"
#include "goPlacesHeader.h"
#include <Windows.h>

#include <iostream>

using namespace std;

int armyCost = (50 + (totalArmy * .01)) / 10, fightersCost = armyCost + (armyCost * .8);

void hangar(){

	system("cls");

	inHangar = true;
	inBridge = false;
	inMedbay = false;
	inStore = false;
	inHelpConsole = false;

	hangarTitle();

	cout << "You are in the hangar now. What do you want to do?\n\n\t Army Size: " << army << " troops.\n\tFleet Size: " << fighters << " fighters.\n" << endl; 

	cout << "1: Train Troops (" << armyCost << " credits per troop)" << endl;
	cout << "2: Train Space Fighters (" << fightersCost << " credits per fighter)" << endl;
	cout << "3: Leave hangar." << endl << endl;
	cout << "You have " << credits << " credits." << endl << endl;

	cout << "Action: ";
	cin >> smallChoice;
	cout << "\n\n";

	if (smallChoice == 3){
		goPlaces();
	}
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
				cout << endl << "1: Yes\n2: No\nAnswer: ";
				cin >> yesTrain;
				if(yesTrain == 1){
					army = army + trainNumber;
					credits = credits - (trainNumber * armyCost);
					cout << "You now have " << army << " troops.";
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
				cout << endl << "1: Yes\n2: No\nAnswer: ";
				cin >> yesTrain;
				if(yesTrain == 1){
					fighters = fighters + trainNumber;
					credits = credits - (trainNumber * fightersCost);
					cout << "You now have " << fighters << " fighters.";
					cout << "\nYou have " << credits << " credits left.";
				}
				else{
					cout << "You chose not to build any fighters...";
				}
			}
		}

		cout << "\n\n";

		break;

	}

	cout << "\nPress ENTER to continue";
	cin.ignore();
	cin.get();

	hangar();

}