#include <iostream>
#include "storeHeader.h"
#include "storeTitleHeader.h"
#include "variablesGlobal.h"
#include "goPlacesHeader.h"
#include "timeGoneByHeader.h"
#include "randomBattleHeader.h"
#include <Windows.h>

void store(){

	totalArmy = army + (2 * fighters);
	armyCost = (int)(.12 * sqrt(totalArmy * 1.0));
	fightersCost = (int)(.12 * sqrt(totalArmy * 1.0)) * 1.8;
	armySell = (int).4 * armyCost, fighterSell = (int).4 * fightersCost;

	system("cls");

	timeGoneBy();
	storeTitle();

	inHangar = false;
	inBridge = false;
	inMedbay = false;
	inStore = true;
	inHelpConsole = false;

	randomBattle();

	std::cout << "\t\t\tWelcome to the Store!\n\n";
	std::cout << "What would you like to do?\n\n\t\t\tFood: " << food << "\n\t\t\tTroops: " << army << "\n\t\t\tFighters: " << fighters << "\n\n1: Buy Food (" << foodCost << " credits per meal)\n2: Buy Upgrades\n3: Sell Personnel\n4: Store Help\n5: Leave Store\n\nAction: ";
	std::cin >> smallChoice;

	// FOOD PURCHASE
	if(smallChoice == 1){

		system("cls");

		std::cout << "How many meals would you like to buy?\n\nMeals: ";
		std::cin >> purchaseAmount;
		std::cout << "\n\nAre you sure you want to purchase " << purchaseAmount << " meals for: " << purchaseAmount * foodCost << " credits?\n\n1: Yes\n2: No\n\nAnswer: ";
		std::cin >> yesPurchase;

		if(yesPurchase == 1){

			std::cout << "You bought " << purchaseAmount << " meals for " << purchaseAmount * foodCost << " credits.\n";
			food = food + purchaseAmount;
			std::cout << "You now have " << food << " meals on your ship.";
			Sleep(2500);
			store();

		}
		else{
			std::cout << "You chose not to purchase any food...";
			Sleep(1750);
			store();
		}
	}
	// UPGRADES
	else if(smallChoice == 2){

		std::cout << "What do you want to upgrade?\n\n1: Troop Strength\n2: Fighter Strength\n3: Ship Hull Health\n\nAction: ";
		std::cin >> upgradeNum;

		// TROOP STRENGTH
		if(upgradeTroopLvl < 6){
			if(upgradeNum == 1){
			std::cout << "\nAre you sure you want to upgrade Troop Strength for " << upgradeTroopLvl * upgradeCost << " credits?\n\n1: Yes\n2: No\n\nAction: ";
			std::cin >> yesPurchase;
			
				if(yesPurchase == 1){

					std::cout << "\nYour Troops get a performance boost for the cost of " << upgradeTroopLvl * upgradeCost << " credits.";
					troopStrength = troopStrength * 2;
					upgradeTroopLvl++;
					upgradeCost += 7500;
					Sleep(1750);
					store();

				}
				else{

					std::cout << "\nYou chose not to upgrade your Troop Strength.";
					Sleep(1750);
					store();

				}
			}
		}
		else{
			system("cls");
			std::cout << "You have maxed Troop Strength already!";
			Sleep(1750);
			store();
		}

		// FIGHTER STRENGTH
		if(upgradeFighterLvl < 6){
			if(upgradeNum == 2){
				std::cout << "\nAre you sure you want to upgrade Fighter Strength for " << upgradeFighterLvl * upgradeCost << " credits?\n\n1: Yes\n2: No\n\nAction: ";
				std::cin >> yesPurchase;
			
				if(yesPurchase == 1){

					std::cout << "\nYour Fighters get a performance boost for the cost of " << upgradeFighterLvl * upgradeCost << " credits.";
					fighterStrength = (int)fighterStrength * 1.8;
					upgradeFighterLvl++;
					upgradeCost += 10000;
					Sleep(1750);
					store();

				}
				else{

					std::cout << "\nYou chose not to upgrade your Troop Strength.";
					Sleep(1750);
					store();

				}
			}
		}
		else{
			system("cls");
			std::cout << "You have already maxed Fighter Strength!";
			Sleep(1750);
			store();
		}
	}

	// SELL PERSONNEL
	else if(smallChoice == 3){

		std::cout << "\nWhich personnel type would you like to transfer?\n\n1: Troops (" << armySell << " credits per troop)\n2: Fighters (" << fighterSell << " credits per fighter)\n\nAction: ";
		std::cin >> yesPurchase;

		if(yesPurchase == 1){

			armySell = (int).4 * armyCost;
			std::cout << "\nHow many Troops would you like to sell?\n\nNumber of Troops: ";
			std::cin >> purchaseAmount;
			std::cout << "\nAre you sure you want to sell " << purchaseAmount << " troops for " << armySell << " credits?\n\n1: Yes\n2: No\n\nAction: ";
			std::cin >> yesPurchase;

			if(yesPurchase == 1){

				std::cout << "You sell " << purchaseAmount << " troops for " << armySell << " credits.";
				credits += armySell;
				army -= purchaseAmount;

			}
			else{

				system("cls");
				std::cout << "You chose not to sell any troops.";
				Sleep(1750);
				store();

			}
		}
		else if(yesPurchase == 2){

			fighterSell = (int).4 * fightersCost;
			std::cout << "\nHow many Fighters would you like to sell?\n\nNumber of Fighters: ";
			std::cin >> purchaseAmount;
			std::cout << "\nAre you sure you want to sell " << purchaseAmount << " fighters for " << fighterSell << " credits?\n\n1: Yes\n2: No\n\nAction: ";
			std::cin >> yesPurchase;

			if(yesPurchase == 1){

				std::cout << "You sell " << purchaseAmount << " troops for " << fighterSell << " credits.";
				credits += fighterSell;
				fighters -= purchaseAmount;

			}
			else{

				system("cls");
				std::cout << "You chose not to sell any fighters.";
				Sleep(1750);
				store();
			}
		}
	}

	// STORE HELP
	else if(smallChoice == 4){

		std::cout << "\t\t\t\tStore Help\n\n";
		std::cout << "In the Store, you can spend credits on restocking food\n\tBuying upgrades, or selling current personnel for some credits back!\n\n";
		std::cout << "Just choose your action with the corresponding number\n\t(then hit enter) and follow the instructions!\n\n";
		std::cout << "\n\n\n                            Press ENTER to CONTINUE";
		std::cin.ignore();
		std::cin.get();

		store();

	}

	// LEAVE STORE
	else if(smallChoice == 5){
		goPlaces();
	}

	// ULTIMATUM...
	else{

		system("cls");
		std::cout << "You may want to use one of your options...";
		Sleep(1750);
		store();

	}

	std::cout << "\n\n\n                            Press ENTER to CONTINUE";
	std::cin.ignore();
	std::cin.get();

	goPlaces();

}