#include <iostream>

#include "kitchenHeader.h"
#include "kitchenTitleHeader.h"
#include "goPlacesHeader.h"

void kitchen(){

	kitchenTitle();

	std::cout << "Press any key";
	std::cin.get();

	goPlaces();

}