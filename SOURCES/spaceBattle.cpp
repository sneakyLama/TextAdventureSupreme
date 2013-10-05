#include <iostream>
#include <cmath>
#include "spaceBattleHeader.h"
#include "variablesGlobal.h"
#include "bridgeHeader.h"

void spaceBattle(){

	totalFighterStrength = fighters * fighterStrength;
	enemyTotalFighterStrength = enemyFighters * enemyFighterStrength;

	std::cout << "Admiral! We have encountered a " << enemyFighterSize << " enemy fleet! What should we do?";

	std::cout << "\t\t\t\n\nEnemy Strength = " << enemyTotalFighterStrength;
	std::cout << "\n\n\t\t\tYour Strength = " << totalFighterStrength;

	std::cout << "\n\n1: Fight\n2: Run\n\nAction: ";
	std::cin >> smallChoice;

	if(smallChoice = 1){

		system("cls");

		// determine some sort of 'significant' number advantage
		difference = totalFighterStrength - enemyTotalFighterStrength;

		if (difference < 0){

			enemyAdvantage = -1 * difference;
			advantage = 0;

		}
		else{

			advantage = difference;
			enemyAdvantage = 0;

		}

		enemyTotalFighterStrength = enemyTotalFighterStrength + (enemyAdvantage * enemyFighterStrength);
		totalFighterStrength = totalFighterStrength + (advantage * fighterStrength);

		// determining you chance of winning based on how strong each army is
		// if your army is stronger than you have atleast a 50% chance to win + (a number in 10)%.
		if(enemyTotalFighterStrength < totalFighterStrength){
					
			winChance = abs((rand() % 10 + 1) + 5);
			if(winChance > 10){
				winChance = 10;
			}

			// guarenteed win if 10 times stronger, with huge casualty redux
			if(totalFighterStrength > enemyTotalFighterStrength * 10){
				winChance = 11;
				casualtiesHugeWin = (fighters - enemyFighters) / 2;
			}

		}
		else{

			winChance = abs((rand() % 10 + 1) - 5);

		}

		result = rand() % 10 + 1;

		// determing winner, casualties far less if won.
		if(result < winChance){

			// WIN!
			if(winChance == 11){
				casualties = casualtiesHugeWin;
			}
			else{
				casualties = casualtiesWinLoss;
			}

			fighters = fighters - casualties;

			std::cout << "\n\n\t\t\tThe battle was won! The entire enemy fleet was destroyed!" << std::endl;
			std::cout << "\n\t\t\t\tCasualties: " << casualties;

			std::cout << "\n\n\t\t\tYou earn " << payout << " credits!";

			credits = credits + payout;

		}
				
		else{

			// LOSE!
			casualties = casualtiesLoseLoss;
			fighters = fighters - casualties;

			std::cout << "\n\n\t\t\tThe battle was lost! You manage to escape with what fleet you have left!" << std::endl;
			std::cout << "\n\t\t\t\tCasualties: " << casualties;

			std::cout << "\n\n\tYou manage to scrape up some scrap metal to recycle... " << losingPayout << " credits earned.";

			credits = credits + losingPayout;

		}

		std::cout << "\n\n\n                            Press ENTER to CONTINUE";
		std::cin.ignore();
		std::cin.get();		

	}

	bridge();
}