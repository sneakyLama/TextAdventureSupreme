#include <iostream>
#include "randomFindHeader.h"
#include <random>
#include "variablesGlobal.h"
#include "timeGoneByHeader.h"
#include "bridgeHeader.h"

void randomFind(){

	int randScrapField = rand() % 500 + 1;
	int randAsteroidField = rand() % 1000 + 1;
	int creditReward = 15000;
	int foodReward = 5000;

	if(asteroidField = true){

		if(randAsteroidField > 10){
			std::cout << "You find nothing of value...";
			"\n\n\n                            Press ENTER to CONTINUE";
			std::cin.get();
			bridge();
		}
		else{
			switch(randAsteroidField){

			case 1:

				std::cout << "You find a small deposit of sapphires, you earn " << creditReward * .01 << " credits.";
				credits = credits + (creditReward * .01);
				break;

			case 2:

				std::cout << "You find a small deposit of emeralds, you earn " << creditReward * .05 << " credits.";
				credits = credits + (creditReward * .05);
				break;

			case 3:

				std::cout << "You find a small deposit of ruby, you earn " << creditReward * .10 << " credits.";
				credits = credits + (creditReward * .10);
				break;

			case 4:

				std::cout << "You find a small deposit of diamonds, you earn " << creditReward * .20 << " credits.";
				credits = credits + (creditReward * .20);
				break;

			case 5:
		
				std::cout << "You find a small deposit of uranium, you earn " << creditReward * .40 << " credits.";
				credits = credits + (creditReward * .40);
				break;

			case 6:

				std::cout << "You find a small abandoned cargo ship, you sell anything of value\nYou earn " << creditReward * .15 << " credits.\n";
				std::cout << "You also find some preserved food, you find " << foodReward * .15 << " meals.";
				credits = credits + (creditReward * .15);
				food = food + (foodReward * .15);
				break;

			case 7:

				std::cout << "You find an abandoned cargo ship, you sell anything of value\nYou earn " << creditReward * .25 << " credits.";
				std::cout << "You also find some preserved food, you find " << foodReward * .25 << " meals.";
				credits = credits + (creditReward * .25);
				food = food + (foodReward * .25);
				break;

			case 8:

				std::cout << "You find a large abandoned cargo ship, you sell anything of value\nYou earn " << creditReward * .45 << " credits.";
				std::cout << "You also find some preserved food, you find " << foodReward * .45 << " meals.";
				credits = credits + (creditReward * .45);
				break;
	
			case 9:

				std::cout << "You come across an allied mining ship, they give you " << creditReward * .25 << " credits.";
				std::cout << "They also give you a some of their excess food, you get " << foodReward * .75 << " meals.";
				credits = credits + (creditReward * .75);
				food = food + (foodReward * .75);
				break;

			case 10:

				std::cout << "You come across a fleet of allied mining ships.\nThey give you a generous amount of credits\nYou get: " << creditReward << " credits.";
				std::cout << "They also give you enough food to feed several thousand men\nYou get: " << foodReward << " meals.";
				credits = credits + creditReward;
				food = food + foodReward;
				break;

			}
		}
	}

	else if(scrapField == true){

		if(randScrapField > 10){
			std::cout << "You find nothing of value...";
			std::cout << "\n\n\n                            Press ENTER to CONTINUE";
			std::cin.get();
			bridge();
		}
		else{
			switch(randScrapField){
	
			case 1:

				std::cout << "You find some twisted up metal, you earn " << creditReward * .01 << " credits.";
				credits = credits + (creditReward * .01);
				break;

			case 2:

				std::cout << "You find a small working engine, you earn " << creditReward * .05 << " credits.";
				credits = credits + (creditReward * .05);
				break;

			case 3:

				std::cout << "You find a shard of space gold, you earn " << creditReward * .10 << " credits.";
				credits = credits + (creditReward * .10);
				break;

			case 4:

				std::cout << "You find a large cruiser wing, you earn " << creditReward * .20 << " credits.";
				credits = credits + (creditReward * .20);
				break;

			case 5:
		
				std::cout << "You find a cluster of fuel cells, you earn " << creditReward * .40 << " credits.";
				credits = credits + (creditReward * .40);
				break;

			case 6:

				std::cout << "You find a working missile pod, you sell anything of value\nYou earn " << creditReward * .15 << " credits.\n";
				std::cout << "You also find some preserved food, you find " << foodReward * .15 << " meals.";
				credits = credits + (creditReward * .15);
				food = food + (foodReward * .15);
				break;

			case 7:

				std::cout << "You find an abandoned cargo ship, you sell anything of value\nYou earn " << creditReward * .25 << " credits.";
				std::cout << "You also find some preserved food, you find " << foodReward * .25 << " meals.";
				credits = credits + (creditReward * .25);
				food = food + (foodReward * .25);
				break;

			case 8:

				std::cout << "You find a large abandoned cargo ship, you sell anything of value\nYou earn " << creditReward * .45 << " credits.";
				std::cout << "You also find some preserved food, you find " << foodReward * .45 << " meals.";
				credits = credits + (creditReward * .45);
				break;
	
			case 9:

				std::cout << "You come across an allied scrap ship, they give you " << creditReward * .25 << " credits.";
				std::cout << "They also give you a some of their excess food, you get " << foodReward * .75 << " meals.";
				credits = credits + (creditReward * .75);
				food = food + (foodReward * .75);
				break;

			case 10:

				std::cout << "You come across a fleet of allied scrap ships.\nThey give you a generous amount of credits\nYou get: " << creditReward << " credits.";
				std::cout << "They also give you enough food to feed several thousand men\nYou get: " << foodReward << " meals.";
				credits = credits + creditReward;
				food = food + foodReward;
				break;

			}
		}
	}

	else{

		std::cout << "Theoretically, you werent supposed to see this message...";
		system("pause");
		bridge();

	}

	timeGoneBy();
	std::cout << "\n\n\n                            Press ENTER to CONTINUE";
	std::cin.get();
	bridge();

}