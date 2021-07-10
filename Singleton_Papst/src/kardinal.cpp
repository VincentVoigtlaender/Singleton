/*
 * kardinal.cpp
 *
 *  Created on: 09.07.2021
 *      Author: mrt
 */

#include "kardinal.h"

void Kardinal::papst_waehlen(std::string wunschname) {

	Papst* papst_ = Papst::getPapst(wunschname);
	std::cout << papst_->getName() << std::endl;

}
