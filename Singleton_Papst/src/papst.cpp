/*
 * papst.cpp
 *
 *  Created on: 09.07.2021
 *      Author: mrt
 */

#include "papst.h"


// Zu Beginn existiert noch kein Papst
Papst* Papst::papst_ = nullptr;


// privater Konstruktor
Papst::Papst(std::string wunschname) {
	name = wunschname;
}


// Kontrolliert Erstellung und Zugriff auf einzige Instanz
Papst* Papst::getPapst(std::string wunschname){

	// falls noch kein Papst existiert, wird er erzeugt
	if(!papst_) {
		std::cout << "Ein neuer Papst wurde gewählt!: ";
		papst_ = new Papst(wunschname);
	} else {
		std::cout << "Es ist bereits ein Papst im Amt: ";
	}

	return papst_;

}

std::string Papst::getName() {
	return name;
}
