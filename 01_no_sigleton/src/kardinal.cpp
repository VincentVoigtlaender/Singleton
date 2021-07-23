/*
 * kardinal.cpp
 *
 *  Created on: 23.07.2021
 *      Author: mrt
 */

#include "kardinal.h"


Kardinal::Kardinal() {
	meinPapst_ = nullptr;
}

Kardinal::~Kardinal() {
	meinPapst_ = nullptr;
}

void Kardinal::papst_waehlen(std::string wunschname) {
	meinPapst_ = new Papst(wunschname);
	std::cout << "Neuer Papst gewählt: ";
}

Papst* Kardinal::getPapst() {
	return meinPapst_;
}
