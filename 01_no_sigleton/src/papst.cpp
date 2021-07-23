/*
 * papst.cpp
 *
 *  Created on: 23.07.2021
 *      Author: mrt
 */

#include "papst.h"

// privater Konstruktor
Papst::Papst(std::string wunschname) {
	name = wunschname;
}

std::string Papst::getName() {
	return name;
}
