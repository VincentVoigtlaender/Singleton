/*
 * main.cpp
 *
 *  Created on: 09.07.2021
 *      Author: mrt
 */

#include "kardinal.h"


int main() {

	Kardinal kardinal1;
	Kardinal kardinal2;

	kardinal1.papst_waehlen("Benedikt der XVI.");
	std::cout << kardinal1.getPapst_()->getName() << " an Adresse " << kardinal1.getPapst_() << std::endl;

	kardinal2.papst_waehlen("Franziskus");
	std::cout << kardinal2.getPapst_()->getName() << " an Adresse " << kardinal2.getPapst_() << std::endl;


	return 0;

}
