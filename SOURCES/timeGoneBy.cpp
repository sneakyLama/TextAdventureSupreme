#include "variablesGlobal.h"
#include <iostream>
#include "timeGoneByHeader.h"

int time;

void timeGoneBy(){

	time++;

	if(time == 10){

		days++;
		time = 0;
		food = food - foodConsumption;

	}

}