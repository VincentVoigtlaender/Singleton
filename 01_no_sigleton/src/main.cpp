/*
 * main.cpp
 *
 *  Created on: 23.07.2021
 *      Author: mrt
 */

#include "kardinal.h"


int main() {

	Kardinal kardinal1;
	Kardinal kardinal2;

	kardinal1.papst_waehlen("Benedikt der XVI.");
	std::cout << kardinal1.getPapst()->getName() << " an Adresse " << kardinal1.getPapst() << std::endl;

	kardinal2.papst_waehlen("Franziskus       ");
	std::cout << kardinal2.getPapst()->getName() << " an Adresse " << kardinal2.getPapst() << std::endl;

	return 0;

}
