#include <iostream>
#include <cmath>
#include "randomBattleHeader.h"
#include <random>
#include "variablesGlobal.h"
#include "bridgeHeader.h"
#include "bridgeTitleHeader.h"
#include "spaceBattleHeader.h"
#include "timeGoneByHeader.h"

// REALLY NEEDS BALANCING!
void randomBattle(){

	enemyFighters = 1;

	// some random-icity to enemy fleet sizes 
	int enemySizePlusMinus = rand() % 2 + 1;
	int enemySizeVariation;

	if(fighters < 25000){
		if(fighters < 17500){
			if(fighters < 12500){
				if(fighters < 7500){
					if(fighters < 5000){
						if(fighters < 3000){
							if(fighters < 2000){
								if (fighters < 1000){
									enemySizeVariation = rand() % 100 + 1;
								}
								enemySizeVariation = rand() % 200 + 1;
							}
							enemySizeVariation = rand() % 300 + 1;
						}
						enemySizeVariation = rand() % 500 + 1;
					}
					enemySizeVariation = rand() % 750 + 1;
				}
				enemySizeVariation = rand() % 1250 + 1;
			}
			enemySizeVariation = rand() % 1750 + 1;
		}
		enemySizeVariation = rand() % 2500 + 1;
	}
	else{
		enemySizeVariation = rand() % 3000 + 1;
	}

	// add or subtract the variation... for variation
	if(enemySizePlusMinus = 1){
		enemyFighters = enemyFighters + enemySizeVariation;
	}
	else{
		enemyFighters = enemyFighters - enemySizeVariation;
	}

	// determine how big in words enemy is
	if(enemyFighters < 10000){
		if(enemyFighters < 7500){
			if(enemyFighters < 3000){
				if(enemyFighters < 1750){
					if(enemyFighters < 500){
						enemyFighterSize = "tiny";
						payout = (rand() % 1000 + 1) + 2500;
					}
					enemyFighterSize = "small";
					payout = (rand() % 1500 + 1) + 5000;
				}
				enemyFighterSize = "medium";
				payout = (rand() % 2500 + 1) + 10000;
			}
			enemyFighterSize = "large";
			payout = (rand() % 5000 + 1) + 20000;
		}
		enemyFighterSize = "huge";
		payout = (rand() % 7500 + 1) + 50000;
	}
	else{
		enemyFighterSize = "capitol";
		payout = (rand() % 10000 + 1) + 100000;
	}

	// some cash is earned even if you lose battle
	losingPayout = (int)(.4 * payout);

	// random chance based off of army size, larger army = more likely to find a battle
	battleGo = ((rand() % battleChance) + 1);

	// if random chance ^ = a random number between 1 and 10... battle found
	if(battleGo == (rand() % 10) + 1){

		if(inBridge == false){

			std::cout << "*STATIC* Admiral! Enemy ship in sight, we need you on the bridge now!";
			bridgeTitle();
			timeGoneBy();
			spaceBattle();

		}
		else{

			spaceBattle();

		}
	}
}